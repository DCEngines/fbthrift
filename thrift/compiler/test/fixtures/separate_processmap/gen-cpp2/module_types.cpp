/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/separate_processmap/gen-cpp2/module_types.h"

#include "thrift/compiler/test/fixtures/separate_processmap/gen-cpp2/module_types.tcc"

#include <algorithm>

#include <folly/Indestructible.h>

#include "thrift/compiler/test/fixtures/separate_processmap/gen-cpp2/module_data.h"



namespace cpp2 {

const _MyEnum_EnumMapFactory::ValuesToNamesMapType _MyEnum_VALUES_TO_NAMES = _MyEnum_EnumMapFactory::makeValuesToNamesMap();
const _MyEnum_EnumMapFactory::NamesToValuesMapType _MyEnum_NAMES_TO_VALUES = _MyEnum_EnumMapFactory::makeNamesToValuesMap();

} // cpp2
namespace std {

} // std
namespace apache { namespace thrift {

template <> const std::size_t TEnumTraits< ::cpp2::MyEnum>::size = 2;
template <> const folly::Range<const  ::cpp2::MyEnum*> TEnumTraits< ::cpp2::MyEnum>::values = folly::range( ::cpp2::_MyEnumEnumDataStorage::values);
template <> const folly::Range<const folly::StringPiece*> TEnumTraits< ::cpp2::MyEnum>::names = folly::range( ::cpp2::_MyEnumEnumDataStorage::names);
template <> const char* TEnumTraits< ::cpp2::MyEnum>::findName( ::cpp2::MyEnum value) {
  static auto const map = folly::Indestructible< ::cpp2::_MyEnum_EnumMapFactory::ValuesToNamesMapType>{ ::cpp2::_MyEnum_EnumMapFactory::makeValuesToNamesMap()};
  return findName(*map, value);
}

template <> bool TEnumTraits< ::cpp2::MyEnum>::findValue(const char* name,  ::cpp2::MyEnum* outValue) {
  static auto const map = folly::Indestructible< ::cpp2::_MyEnum_EnumMapFactory::NamesToValuesMapType>{ ::cpp2::_MyEnum_EnumMapFactory::makeNamesToValuesMap()};
  return findValue(*map, name, outValue);
}

}} // apache::thrift
namespace cpp2 {

void MyStruct::__clear() {
  // clear all fields
  MyIntField = 0;
  MyStringField = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  __isset.__clear();
}

bool MyStruct::operator==(const MyStruct& rhs) const {
  if (!((MyIntField == rhs.MyIntField))) {
    return false;
  }
  if (!((MyStringField == rhs.MyStringField))) {
    return false;
  }
  return true;
}

void swap(MyStruct& a, MyStruct& b) {
  using ::std::swap;
  swap(a.MyIntField, b.MyIntField);
  swap(a.MyStringField, b.MyStringField);
  swap(a.__isset, b.__isset);
}

template uint32_t MyStruct::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyStruct::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

} // cpp2
