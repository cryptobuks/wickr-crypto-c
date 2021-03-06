/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ephemeral_keypair.proto */

#ifndef PROTOBUF_C_ephemeral_5fkeypair_2eproto__INCLUDED
#define PROTOBUF_C_ephemeral_5fkeypair_2eproto__INCLUDED

#if __has_include(<protobuf-c/protobuf-c.h>)
#include <protobuf-c/protobuf-c.h>
#elif __has_include(<protobuf_c/protobuf-c.h>)
#include <protobuf_c/protobuf-c.h>
#else
#include "protobuf-c.h"
#endif

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Wickr__Proto__EphemeralKeypair Wickr__Proto__EphemeralKeypair;


/* --- enums --- */


/* --- messages --- */

struct  _Wickr__Proto__EphemeralKeypair
{
  ProtobufCMessage base;
  protobuf_c_boolean has_identifier;
  uint64_t identifier;
  protobuf_c_boolean has_ec_key;
  ProtobufCBinaryData ec_key;
  protobuf_c_boolean has_key_signature;
  ProtobufCBinaryData key_signature;
};
#define WICKR__PROTO__EPHEMERAL_KEYPAIR__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&wickr__proto__ephemeral_keypair__descriptor) \
    , 0,0, 0,{0,NULL}, 0,{0,NULL} }


/* Wickr__Proto__EphemeralKeypair methods */
void   wickr__proto__ephemeral_keypair__init
                     (Wickr__Proto__EphemeralKeypair         *message);
size_t wickr__proto__ephemeral_keypair__get_packed_size
                     (const Wickr__Proto__EphemeralKeypair   *message);
size_t wickr__proto__ephemeral_keypair__pack
                     (const Wickr__Proto__EphemeralKeypair   *message,
                      uint8_t             *out);
size_t wickr__proto__ephemeral_keypair__pack_to_buffer
                     (const Wickr__Proto__EphemeralKeypair   *message,
                      ProtobufCBuffer     *buffer);
Wickr__Proto__EphemeralKeypair *
       wickr__proto__ephemeral_keypair__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   wickr__proto__ephemeral_keypair__free_unpacked
                     (Wickr__Proto__EphemeralKeypair *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Wickr__Proto__EphemeralKeypair_Closure)
                 (const Wickr__Proto__EphemeralKeypair *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor wickr__proto__ephemeral_keypair__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_ephemeral_5fkeypair_2eproto__INCLUDED */
