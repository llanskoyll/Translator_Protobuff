/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: structurs.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "structurs.pb-c.h"
void   config_ahsm_t__init
                     (ConfigAhsmT         *message)
{
  static const ConfigAhsmT init_value = CONFIG_AHSM_T__INIT;
  *message = init_value;
}
size_t config_ahsm_t__get_packed_size
                     (const ConfigAhsmT *message)
{
  assert(message->base.descriptor == &config_ahsm_t__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t config_ahsm_t__pack
                     (const ConfigAhsmT *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &config_ahsm_t__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t config_ahsm_t__pack_to_buffer
                     (const ConfigAhsmT *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &config_ahsm_t__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
ConfigAhsmT *
       config_ahsm_t__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (ConfigAhsmT *)
     protobuf_c_message_unpack (&config_ahsm_t__descriptor,
                                allocator, len, data);
}
void   config_ahsm_t__free_unpacked
                     (ConfigAhsmT *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &config_ahsm_t__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor config_ahsm_t__field_descriptors[9] =
{
  {
    "version",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(ConfigAhsmT, has_version),
    offsetof(ConfigAhsmT, version),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "name",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(ConfigAhsmT, name),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "token_type",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(ConfigAhsmT, has_token_type),
    offsetof(ConfigAhsmT, token_type),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "com_mode",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(ConfigAhsmT, has_com_mode),
    offsetof(ConfigAhsmT, com_mode),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "com_boot",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(ConfigAhsmT, has_com_boot),
    offsetof(ConfigAhsmT, com_boot),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "dumb_terminal",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(ConfigAhsmT, has_dumb_terminal),
    offsetof(ConfigAhsmT, dumb_terminal),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "force_optrom",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(ConfigAhsmT, has_force_optrom),
    offsetof(ConfigAhsmT, force_optrom),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "guest_login",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(ConfigAhsmT, has_guest_login),
    offsetof(ConfigAhsmT, guest_login),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "fw_download",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(ConfigAhsmT, has_fw_download),
    offsetof(ConfigAhsmT, fw_download),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned config_ahsm_t__field_indices_by_name[] = {
  4,   /* field[4] = com_boot */
  3,   /* field[3] = com_mode */
  5,   /* field[5] = dumb_terminal */
  6,   /* field[6] = force_optrom */
  8,   /* field[8] = fw_download */
  7,   /* field[7] = guest_login */
  1,   /* field[1] = name */
  2,   /* field[2] = token_type */
  0,   /* field[0] = version */
};
static const ProtobufCIntRange config_ahsm_t__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 9 }
};
const ProtobufCMessageDescriptor config_ahsm_t__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "config_ahsm_t",
  "ConfigAhsmT",
  "ConfigAhsmT",
  "",
  sizeof(ConfigAhsmT),
  9,
  config_ahsm_t__field_descriptors,
  config_ahsm_t__field_indices_by_name,
  1,  config_ahsm_t__number_ranges,
  (ProtobufCMessageInit) config_ahsm_t__init,
  NULL,NULL,NULL    /* reserved[123] */
};
