include "includes.thrift"
namespace java.swift test.fixtures.includes

struct MyStruct {
  1: includes.Included MyIncludedField = { "MyIntField": 5 };
  2: includes.IncludedInt64 MyIncludedInt = includes.IncludedConstant;
}
