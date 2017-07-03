/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/module_types.h"

#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/module_types.tcc"

#include <algorithm>

#include <folly/Indestructible.h>

#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/module_data.h"



namespace some { namespace ns {

const _EnumB_EnumMapFactory::ValuesToNamesMapType _EnumB_VALUES_TO_NAMES = _EnumB_EnumMapFactory::makeValuesToNamesMap();
const _EnumB_EnumMapFactory::NamesToValuesMapType _EnumB_NAMES_TO_VALUES = _EnumB_EnumMapFactory::makeNamesToValuesMap();

}} // some::ns
namespace std {

} // std
namespace apache { namespace thrift {

template <> const std::size_t TEnumTraits< ::some::ns::EnumB>::size = 1;
template <> const folly::Range<const  ::some::ns::EnumB*> TEnumTraits< ::some::ns::EnumB>::values = folly::range( ::some::ns::_EnumBEnumDataStorage::values);
template <> const folly::Range<const folly::StringPiece*> TEnumTraits< ::some::ns::EnumB>::names = folly::range( ::some::ns::_EnumBEnumDataStorage::names);
template <> const char* TEnumTraits< ::some::ns::EnumB>::findName( ::some::ns::EnumB value) {
  static auto const map = folly::Indestructible< ::some::ns::_EnumB_EnumMapFactory::ValuesToNamesMapType>{ ::some::ns::_EnumB_EnumMapFactory::makeValuesToNamesMap()};
  return findName(*map, value);
}

template <> bool TEnumTraits< ::some::ns::EnumB>::findValue(const char* name,  ::some::ns::EnumB* outValue) {
  static auto const map = folly::Indestructible< ::some::ns::_EnumB_EnumMapFactory::NamesToValuesMapType>{ ::some::ns::_EnumB_EnumMapFactory::makeNamesToValuesMap()};
  return findValue(*map, name, outValue);
}

}} // apache::thrift
namespace some { namespace ns {

void ModuleA::__clear() {
  // clear all fields
  i32Field = 0;
  strField = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  listField.clear();
  mapField.clear();
  __isset.__clear();
}

bool ModuleA::operator==(const ModuleA& rhs) const {
  if (!((i32Field == rhs.i32Field))) {
    return false;
  }
  if (!((strField == rhs.strField))) {
    return false;
  }
  if (!((listField == rhs.listField))) {
    return false;
  }
  if (!((mapField == rhs.mapField))) {
    return false;
  }
  return true;
}

const std::vector<int16_t>& ModuleA::get_listField() const& {
  return listField;
}

std::vector<int16_t> ModuleA::get_listField() && {
  return std::move(listField);
}

const std::map<std::string, int32_t>& ModuleA::get_mapField() const& {
  return mapField;
}

std::map<std::string, int32_t> ModuleA::get_mapField() && {
  return std::move(mapField);
}

void swap(ModuleA& a, ModuleA& b) {
  using ::std::swap;
  swap(a.i32Field, b.i32Field);
  swap(a.strField, b.strField);
  swap(a.listField, b.listField);
  swap(a.mapField, b.mapField);
  swap(a.__isset, b.__isset);
}

template uint32_t ModuleA::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ModuleA::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ModuleA::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ModuleA::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ModuleA::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t ModuleA::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t ModuleA::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t ModuleA::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // some::ns
namespace apache { namespace thrift {

}} // apache::thrift
namespace some { namespace ns {

void ModuleB::__clear() {
  // clear all fields
  i32Field = 0;
  inclEnumB = static_cast< ::some::ns::EnumB>(0);
  __isset.__clear();
}

bool ModuleB::operator==(const ModuleB& rhs) const {
  if (!((i32Field == rhs.i32Field))) {
    return false;
  }
  if (!((inclEnumB == rhs.inclEnumB))) {
    return false;
  }
  return true;
}

void swap(ModuleB& a, ModuleB& b) {
  using ::std::swap;
  swap(a.i32Field, b.i32Field);
  swap(a.inclEnumB, b.inclEnumB);
  swap(a.__isset, b.__isset);
}

template uint32_t ModuleB::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ModuleB::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ModuleB::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ModuleB::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ModuleB::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t ModuleB::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t ModuleB::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t ModuleB::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // some::ns
namespace apache { namespace thrift {

}} // apache::thrift
namespace some { namespace ns {

}} // some::ns
