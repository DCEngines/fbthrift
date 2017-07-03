#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from libcpp.iterator cimport inserter as cinserter
from cpython cimport bool as pbool
from libc.stdint cimport int8_t, int16_t, int32_t, int64_t, uint32_t
from cython.operator cimport dereference as deref, preincrement as inc
import thrift.py3.types
cimport thrift.py3.types
cimport thrift.py3.exceptions
from thrift.py3.types import NOTSET
cimport thrift.py3.std_libcpp as std_libcpp
from thrift.py3.serializer cimport IOBuf
from thrift.py3.serializer import Protocol
cimport thrift.py3.serializer as serializer
from thrift.py3.serializer import deserialize, serialize

import sys
from collections.abc import Sequence, Set, Mapping, Iterable
from enum import Enum


class MyEnum(Enum):
    MyValue1 = <int> (MyEnum__MyValue1)
    MyValue2 = <int> (MyEnum__MyValue2)

cdef cMyEnum MyEnum_to_cpp(value):
    if value == MyEnum.MyValue1:
        return MyEnum__MyValue1
    elif value == MyEnum.MyValue2:
        return MyEnum__MyValue2


cdef class MyStruct(thrift.py3.types.Struct):

    def __init__(
        MyStruct self,
        MyIntField=None,
        MyStringField=None
    ):
        self.c_MyStruct = make_shared[cMyStruct]()

        inst = self
        if MyIntField is not None:
            deref(inst.c_MyStruct).MyIntField = MyIntField
            deref(inst.c_MyStruct).__isset.MyIntField = True

        if MyStringField is not None:
            deref(inst.c_MyStruct).MyStringField = MyStringField.encode('UTF-8')
            deref(inst.c_MyStruct).__isset.MyStringField = True


    cdef bytes _serialize(MyStruct self, proto):
        cdef string c_str
        if proto is Protocol.COMPACT:
            serializer.CompactSerialize[cMyStruct](deref(self.c_MyStruct.get()), &c_str)
        elif proto is Protocol.BINARY:
            serializer.BinarySerialize[cMyStruct](deref(self.c_MyStruct.get()), &c_str)
        elif proto is Protocol.JSON:
            serializer.JSONSerialize[cMyStruct](deref(self.c_MyStruct.get()), &c_str)
        return <bytes> c_str

    cdef uint32_t _deserialize(MyStruct self, const IOBuf* buf, proto):
        cdef uint32_t needed
        if proto is Protocol.COMPACT:
            needed = serializer.CompactDeserialize[cMyStruct](buf, deref(self.c_MyStruct.get()))
        elif proto is Protocol.BINARY:
            needed = serializer.BinaryDeserialize[cMyStruct](buf, deref(self.c_MyStruct.get()))
        elif proto is Protocol.JSON:
            needed = serializer.JSONDeserialize[cMyStruct](buf, deref(self.c_MyStruct.get()))
        return needed

    def __reduce__(self):
        return (deserialize, (MyStruct, serialize(self)))

    def __call__(
        MyStruct self,
        MyIntField=NOTSET,
        MyStringField=NOTSET
    ):
        changes = any((
            MyIntField is not NOTSET,

            MyStringField is not NOTSET,
        ))

        if not changes:
            return self

        inst = <MyStruct>MyStruct.__new__(MyStruct)
        inst.c_MyStruct = make_shared[cMyStruct](deref(self.c_MyStruct))
        cdef MyStruct defaults = MyStruct_defaults

        # Convert None's to default value.
        if MyIntField is None:
            deref(inst.c_MyStruct).MyIntField = deref(defaults.c_MyStruct).MyIntField
            deref(inst.c_MyStruct).__isset.MyIntField = False
        if MyIntField is NOTSET:
            MyIntField = None
        if MyStringField is None:
            deref(inst.c_MyStruct).MyStringField = deref(defaults.c_MyStruct).MyStringField
            deref(inst.c_MyStruct).__isset.MyStringField = False
        if MyStringField is NOTSET:
            MyStringField = None

        if MyIntField is not None:
            deref(inst.c_MyStruct).MyIntField = MyIntField
            deref(inst.c_MyStruct).__isset.MyIntField = True

        if MyStringField is not None:
            deref(inst.c_MyStruct).MyStringField = MyStringField.encode('UTF-8')
            deref(inst.c_MyStruct).__isset.MyStringField = True

        return inst

    def __iter__(self):
        yield 'MyIntField', self.MyIntField
        yield 'MyStringField', self.MyStringField

    def __bool__(self):
        return deref(self.c_MyStruct).__isset.MyIntField or deref(self.c_MyStruct).__isset.MyStringField

    @staticmethod
    cdef create(shared_ptr[cMyStruct] c_MyStruct):
        inst = <MyStruct>MyStruct.__new__(MyStruct)
        inst.c_MyStruct = c_MyStruct
        return inst

    @property
    def MyIntField(self):
        if not deref(self.c_MyStruct).__isset.MyIntField:
            return None

        return self.c_MyStruct.get().MyIntField

    @property
    def MyStringField(self):
        if not deref(self.c_MyStruct).__isset.MyStringField:
            return None

        return self.c_MyStruct.get().MyStringField.decode('UTF-8')


    def __richcmp__(self, other, op):
        cdef int cop = op
        if cop not in (2, 3):
            raise TypeError("unorderable types: {}, {}".format(self, other))
        if not (
                isinstance(self, MyStruct) and
                isinstance(other, MyStruct)):
            if cop == 2:  # different types are never equal
                return False
            else:         # different types are always notequal
                return True

        cdef cMyStruct cself = deref((<MyStruct>self).c_MyStruct)
        cdef cMyStruct cother = deref((<MyStruct>other).c_MyStruct)
        cdef cbool cmp = cself == cother
        if cop == 2:
            return cmp
        return not cmp

    def __hash__(MyStruct self):
        if not self.__hash:
            self.__hash = hash((
            self.MyIntField,
            self.MyStringField,
            ))
        return self.__hash

    def __repr__(MyStruct self):
        return f'MyStruct(MyIntField={repr(self.MyIntField)}, MyStringField={repr(self.MyStringField)})'


MyStruct_defaults = MyStruct()


