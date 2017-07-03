// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Game_Define.proto

#ifndef PROTOBUF_Game_5fDefine_2eproto__INCLUDED
#define PROTOBUF_Game_5fDefine_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)

namespace protobuf_Game_5fDefine_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_Game_5fDefine_2eproto

enum OBJECT_TYPE {
  OT_NONE = 0,
  OT_PLAYER = 1,
  OT_MONSTER = 2,
  OBJECT_TYPE_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  OBJECT_TYPE_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool OBJECT_TYPE_IsValid(int value);
const OBJECT_TYPE OBJECT_TYPE_MIN = OT_NONE;
const OBJECT_TYPE OBJECT_TYPE_MAX = OT_MONSTER;
const int OBJECT_TYPE_ARRAYSIZE = OBJECT_TYPE_MAX + 1;

const ::google::protobuf::EnumDescriptor* OBJECT_TYPE_descriptor();
inline const ::std::string& OBJECT_TYPE_Name(OBJECT_TYPE value) {
  return ::google::protobuf::internal::NameOfEnum(
    OBJECT_TYPE_descriptor(), value);
}
inline bool OBJECT_TYPE_Parse(
    const ::std::string& name, OBJECT_TYPE* value) {
  return ::google::protobuf::internal::ParseNamedEnum<OBJECT_TYPE>(
    OBJECT_TYPE_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::OBJECT_TYPE> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::OBJECT_TYPE>() {
  return ::OBJECT_TYPE_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Game_5fDefine_2eproto__INCLUDED
