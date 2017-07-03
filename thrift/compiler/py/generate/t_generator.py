#!/usr/local/bin/python2.6 -tt
#
# Licensed to the Apache Software Foundation (ASF) under one
# or more contributor license agreements. See the NOTICE file
# distributed with this work for additional information
# regarding copyright ownership. The ASF licenses this file
# to you under the Apache License, Version 2.0 (the
# "License"); you may not use this file except in compliance
# with the License. You may obtain a copy of the License at
#
#   http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing,
# software distributed under the License is distributed on an
# "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
# KIND, either express or implied. See the License for the
# specific language governing permissions and limitations
# under the License.
#

from itertools import chain, imap

from thrift_compiler import frontend

autogen_comment = '''Autogenerated by Thrift

DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 @''' 'generated'

class Generator(object):
    '''
    Base class for a thrift code generator. This class defines the basic
    routines for code generation and contains the top level method that
    dispatches code generation across various components.
    '''

    def __init__(self, program, flags):
        assert(isinstance(program, frontend.t_program))
        self._program = program
        self._flags = flags
        self._tmp = 0

        if self.flag_lean_mean_meta_machine:
            if 'fatal' not in self._flags:
                self._flags['fatal'] = ''
            self.flag_fatal = True
            if 'reflection' not in self._flags:
                self._flags['reflection'] = ''
            self.flag_reflection = True

    def _flag(self, flag):
        ret = self._flags.get(flag)
        return ret if ret != '' else True

    #Shorthand
    def __getattr__(self, item):
        # Only get the attributes that start with flag
        if item.startswith('flag_'):
            return self._flag(item[5:])
        raise AttributeError("No such attribute '{0}' inside this t_generator"
                             .format(item))

    def tmp(self, name):
        '''
        Creates a unique temporary variable name, which is just "name" with a
        number appended to it (i.e. name35)
        '''
        txt = name + str(self._tmp)
        self._tmp += 1
        return txt

    @property
    def _autogen_comment(self):
        return self._generate_comment(autogen_comment)

    def generate_program(self):
        '''
    Top level program generation function. Calls the generator subclass methods
    for preparing file streams etc. then iterates over all the parts of the
    program to perform the correct actions.

    @param program The thrift program to compile into C++ source
        '''
        self.init_generator()
        # Generate them all by passing each object to self._generate
        program = self.program
        for item in program.objects:
            self._gen_forward_declaration(item)
        for item in chain(program.enums, program.typedefs, \
                program.objects, program.services):
            self._generate(item)
        self._generate_data()
        self._generate_consts(program.consts)
        if self._flag('frozen2'):
            self._generate_layouts(program.objects)
        if self.flag_fatal or self.flag_reflection:
            self._generate_fatal(program)
        if self._flag('modulemap'):
            self._generate_modulemap()
        self.close_generator()

    def init_generator(self):
        raise NotImplementedError

    def close_generator(self):
        raise NotImplementedError

    @property
    def program(self):
        return self._program

    def _generate_data(self):
        raise NotImplementedError

    def _generate_consts(self, constants):
        raise NotImplementedError

    def _generate_layouts(self):
        raise NotImplementedError

    def _generate_modulemap(self):
        raise NotImplementedError

    def _generate_fatal(self, program):
        pass

    def _generate(self, what):
        '''
        Generate some object
        Switch on the type of what to decide what to generate
        '''
        raise NotImplementedError

    def _generate_comment(self, text):
        raise NotImplementedError


class GeneratorFactory:
    '''
    A factory for producing generator classes of a particular language.

    An instance of this class is responsible for:
    - Registering itself with the generator registry.
    - Providing documentation for the generators it produces.
    '''

    def __init__(self, generator_class):
        self._short_name = generator_class.short_name
        self._long_name = generator_class.long_name
        self._doc = generator_class.__doc__
        self._supported_flags = generator_class.supported_flags
        self._generator_class = generator_class
        # register the generator
        global registry
        registry.register_generator(self)

    @property
    def short_name(self):
        return self._short_name

    @property
    def long_name(self):
        return self._long_name

    @property
    def documentation(self):
        return self._doc

    @property
    def supported_flags(self):
        return self._supported_flags

    def get_generator(self, program, flags):
        'Instantiate the generator_class using these parameters'
        return self._generator_class(program, flags)


class GeneratorRegistry:

    def __init__(self):
        # str -> t_generator_factory
        self.generator_factory_map = {}
        self.reference = {}

    def register_generator(self, factory):
        gfmap = self.generator_factory_map
        if factory.short_name in gfmap:
            raise Exception('Duplicate generators for language "{0}"'.format(
                factory.short_name
                ))
        # Add it to the reference. This is used for autogenerating help
        # messages
        self.reference[factory.short_name] = dict(
            long=factory.long_name,
            options=factory.supported_flags
        )
        # add it to the map
        gfmap[factory.short_name] = factory

    def get_generator(self, program, language, flags):
        gfmap = self.generator_factory_map
        generator_factory = None
        try:
            generator_factory = gfmap[language]
        except KeyError as e:
            raise Exception('t_generator_registry: could not get_generator '
                            'for language {0}'.format(language))
        return generator_factory.get_generator(program, flags)

# global
registry = GeneratorRegistry()
