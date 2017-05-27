/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: config.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "config.pb-c.h"
void   nsjail__id_map__init
                     (Nsjail__IdMap         *message)
{
  static Nsjail__IdMap init_value = NSJAIL__ID_MAP__INIT;
  *message = init_value;
}
size_t nsjail__id_map__get_packed_size
                     (const Nsjail__IdMap *message)
{
  assert(message->base.descriptor == &nsjail__id_map__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t nsjail__id_map__pack
                     (const Nsjail__IdMap *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &nsjail__id_map__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t nsjail__id_map__pack_to_buffer
                     (const Nsjail__IdMap *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &nsjail__id_map__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Nsjail__IdMap *
       nsjail__id_map__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Nsjail__IdMap *)
     protobuf_c_message_unpack (&nsjail__id_map__descriptor,
                                allocator, len, data);
}
void   nsjail__id_map__free_unpacked
                     (Nsjail__IdMap *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &nsjail__id_map__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   nsjail__mount_pt__init
                     (Nsjail__MountPt         *message)
{
  static Nsjail__MountPt init_value = NSJAIL__MOUNT_PT__INIT;
  *message = init_value;
}
size_t nsjail__mount_pt__get_packed_size
                     (const Nsjail__MountPt *message)
{
  assert(message->base.descriptor == &nsjail__mount_pt__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t nsjail__mount_pt__pack
                     (const Nsjail__MountPt *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &nsjail__mount_pt__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t nsjail__mount_pt__pack_to_buffer
                     (const Nsjail__MountPt *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &nsjail__mount_pt__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Nsjail__MountPt *
       nsjail__mount_pt__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Nsjail__MountPt *)
     protobuf_c_message_unpack (&nsjail__mount_pt__descriptor,
                                allocator, len, data);
}
void   nsjail__mount_pt__free_unpacked
                     (Nsjail__MountPt *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &nsjail__mount_pt__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   nsjail__exe__init
                     (Nsjail__Exe         *message)
{
  static Nsjail__Exe init_value = NSJAIL__EXE__INIT;
  *message = init_value;
}
size_t nsjail__exe__get_packed_size
                     (const Nsjail__Exe *message)
{
  assert(message->base.descriptor == &nsjail__exe__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t nsjail__exe__pack
                     (const Nsjail__Exe *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &nsjail__exe__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t nsjail__exe__pack_to_buffer
                     (const Nsjail__Exe *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &nsjail__exe__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Nsjail__Exe *
       nsjail__exe__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Nsjail__Exe *)
     protobuf_c_message_unpack (&nsjail__exe__descriptor,
                                allocator, len, data);
}
void   nsjail__exe__free_unpacked
                     (Nsjail__Exe *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &nsjail__exe__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   nsjail__ns_jail_config__init
                     (Nsjail__NsJailConfig         *message)
{
  static Nsjail__NsJailConfig init_value = NSJAIL__NS_JAIL_CONFIG__INIT;
  *message = init_value;
}
size_t nsjail__ns_jail_config__get_packed_size
                     (const Nsjail__NsJailConfig *message)
{
  assert(message->base.descriptor == &nsjail__ns_jail_config__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t nsjail__ns_jail_config__pack
                     (const Nsjail__NsJailConfig *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &nsjail__ns_jail_config__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t nsjail__ns_jail_config__pack_to_buffer
                     (const Nsjail__NsJailConfig *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &nsjail__ns_jail_config__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Nsjail__NsJailConfig *
       nsjail__ns_jail_config__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Nsjail__NsJailConfig *)
     protobuf_c_message_unpack (&nsjail__ns_jail_config__descriptor,
                                allocator, len, data);
}
void   nsjail__ns_jail_config__free_unpacked
                     (Nsjail__NsJailConfig *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &nsjail__ns_jail_config__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
char nsjail__id_map__inside_id__default_value[] = "";
char nsjail__id_map__outside_id__default_value[] = "";
static const uint32_t nsjail__id_map__count__default_value = 1u;
static const protobuf_c_boolean nsjail__id_map__use_newidmap__default_value = 0;
static const ProtobufCFieldDescriptor nsjail__id_map__field_descriptors[4] =
{
  {
    "inside_id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Nsjail__IdMap, inside_id),
    NULL,
    &nsjail__id_map__inside_id__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "outside_id",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Nsjail__IdMap, outside_id),
    NULL,
    &nsjail__id_map__outside_id__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "count",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Nsjail__IdMap, count),
    NULL,
    &nsjail__id_map__count__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "use_newidmap",
    4,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Nsjail__IdMap, use_newidmap),
    NULL,
    &nsjail__id_map__use_newidmap__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned nsjail__id_map__field_indices_by_name[] = {
  2,   /* field[2] = count */
  0,   /* field[0] = inside_id */
  1,   /* field[1] = outside_id */
  3,   /* field[3] = use_newidmap */
};
static const ProtobufCIntRange nsjail__id_map__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor nsjail__id_map__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "nsjail.IdMap",
  "IdMap",
  "Nsjail__IdMap",
  "nsjail",
  sizeof(Nsjail__IdMap),
  4,
  nsjail__id_map__field_descriptors,
  nsjail__id_map__field_indices_by_name,
  1,  nsjail__id_map__number_ranges,
  (ProtobufCMessageInit) nsjail__id_map__init,
  NULL,NULL,NULL    /* reserved[123] */
};
char nsjail__mount_pt__options__default_value[] = "";
static const protobuf_c_boolean nsjail__mount_pt__is_bind__default_value = 0;
static const protobuf_c_boolean nsjail__mount_pt__is_ro__default_value = 0;
static const ProtobufCFieldDescriptor nsjail__mount_pt__field_descriptors[7] =
{
  {
    "src",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Nsjail__MountPt, src),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "dst",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Nsjail__MountPt, dst),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "fstype",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Nsjail__MountPt, fstype),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "options",
    4,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Nsjail__MountPt, options),
    NULL,
    &nsjail__mount_pt__options__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "is_bind",
    5,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Nsjail__MountPt, is_bind),
    NULL,
    &nsjail__mount_pt__is_bind__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "is_ro",
    6,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Nsjail__MountPt, is_ro),
    NULL,
    &nsjail__mount_pt__is_ro__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "is_dir",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    offsetof(Nsjail__MountPt, has_is_dir),
    offsetof(Nsjail__MountPt, is_dir),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned nsjail__mount_pt__field_indices_by_name[] = {
  1,   /* field[1] = dst */
  2,   /* field[2] = fstype */
  4,   /* field[4] = is_bind */
  6,   /* field[6] = is_dir */
  5,   /* field[5] = is_ro */
  3,   /* field[3] = options */
  0,   /* field[0] = src */
};
static const ProtobufCIntRange nsjail__mount_pt__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 7 }
};
const ProtobufCMessageDescriptor nsjail__mount_pt__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "nsjail.MountPt",
  "MountPt",
  "Nsjail__MountPt",
  "nsjail",
  sizeof(Nsjail__MountPt),
  7,
  nsjail__mount_pt__field_descriptors,
  nsjail__mount_pt__field_indices_by_name,
  1,  nsjail__mount_pt__number_ranges,
  (ProtobufCMessageInit) nsjail__mount_pt__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor nsjail__exe__field_descriptors[2] =
{
  {
    "path",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Nsjail__Exe, path),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "arg",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_STRING,
    offsetof(Nsjail__Exe, n_arg),
    offsetof(Nsjail__Exe, arg),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned nsjail__exe__field_indices_by_name[] = {
  1,   /* field[1] = arg */
  0,   /* field[0] = path */
};
static const ProtobufCIntRange nsjail__exe__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor nsjail__exe__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "nsjail.Exe",
  "Exe",
  "Nsjail__Exe",
  "nsjail",
  sizeof(Nsjail__Exe),
  2,
  nsjail__exe__field_descriptors,
  nsjail__exe__field_indices_by_name,
  1,  nsjail__exe__number_ranges,
  (ProtobufCMessageInit) nsjail__exe__init,
  NULL,NULL,NULL    /* reserved[123] */
};
char nsjail__ns_jail_config__hostname__default_value[] = "NSJAIL";
char nsjail__ns_jail_config__cwd__default_value[] = "/";
char nsjail__ns_jail_config__bindhost__default_value[] = "::";
char nsjail__ns_jail_config__cgroup_mem_mount__default_value[] = "/sys/fs/cgroup/memory";
char nsjail__ns_jail_config__cgroup_mem_parent__default_value[] = "NSJAIL";
char nsjail__ns_jail_config__cgroup_pids_mount__default_value[] = "/sys/fs/cgroup/pids";
char nsjail__ns_jail_config__cgroup_pids_parent__default_value[] = "NSJAIL";
char nsjail__ns_jail_config__macvlan_vs_ip__default_value[] = "192.168.0.2";
char nsjail__ns_jail_config__macvlan_vs_nm__default_value[] = "255.255.255.0";
char nsjail__ns_jail_config__macvlan_vs_gw__default_value[] = "192.168.0.1";
static const Nsjail__Mode nsjail__ns_jail_config__mode__default_value = NSJAIL__MODE__ONCE;
static const protobuf_c_boolean nsjail__ns_jail_config__is_root_rw__default_value = 0;
static const uint32_t nsjail__ns_jail_config__port__default_value = 0u;
static const uint32_t nsjail__ns_jail_config__max_conns_per_ip__default_value = 0u;
static const uint32_t nsjail__ns_jail_config__time_limit__default_value = 600u;
static const protobuf_c_boolean nsjail__ns_jail_config__daemon__default_value = 0;
static const protobuf_c_boolean nsjail__ns_jail_config__keep_env__default_value = 0;
static const protobuf_c_boolean nsjail__ns_jail_config__silent__default_value = 0;
static const protobuf_c_boolean nsjail__ns_jail_config__skip_setsid__default_value = 0;
static const protobuf_c_boolean nsjail__ns_jail_config__pivot_root_only__default_value = 0;
static const protobuf_c_boolean nsjail__ns_jail_config__disable_no_new_privs__default_value = 0;
static const uint64_t nsjail__ns_jail_config__rlimit_as__default_value = 512ull;
static const uint64_t nsjail__ns_jail_config__rlimit_core__default_value = 0ull;
static const uint64_t nsjail__ns_jail_config__rlimit_cpu__default_value = 600ull;
static const uint64_t nsjail__ns_jail_config__rlimit_fsize__default_value = 1ull;
static const uint64_t nsjail__ns_jail_config__rlimit_nofile__default_value = 32ull;
static const protobuf_c_boolean nsjail__ns_jail_config__persona_addr_compat_layout__default_value = 0;
static const protobuf_c_boolean nsjail__ns_jail_config__persona_mmap_page_zero__default_value = 0;
static const protobuf_c_boolean nsjail__ns_jail_config__persona_read_implies_exec__default_value = 0;
static const protobuf_c_boolean nsjail__ns_jail_config__persona_addr_limit_3gb__default_value = 0;
static const protobuf_c_boolean nsjail__ns_jail_config__persona_addr_no_randomize__default_value = 0;
static const protobuf_c_boolean nsjail__ns_jail_config__clone_newnet__default_value = 1;
static const protobuf_c_boolean nsjail__ns_jail_config__clone_newuser__default_value = 1;
static const protobuf_c_boolean nsjail__ns_jail_config__clone_newns__default_value = 1;
static const protobuf_c_boolean nsjail__ns_jail_config__clone_newpid__default_value = 1;
static const protobuf_c_boolean nsjail__ns_jail_config__clone_newipc__default_value = 1;
static const protobuf_c_boolean nsjail__ns_jail_config__clone_newuts__default_value = 1;
static const protobuf_c_boolean nsjail__ns_jail_config__clone_newcgroup__default_value = 0;
static const protobuf_c_boolean nsjail__ns_jail_config__mount_proc__default_value = 1;
static const uint64_t nsjail__ns_jail_config__cgroup_mem_max__default_value = 0ull;
static const uint64_t nsjail__ns_jail_config__cgroup_pids_max__default_value = 0ull;
static const protobuf_c_boolean nsjail__ns_jail_config__iface_no_lo__default_value = 0;
static const ProtobufCFieldDescriptor nsjail__ns_jail_config__field_descriptors[55] =
{
  {
    "mode",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, mode),
    &nsjail__mode__descriptor,
    &nsjail__ns_jail_config__mode__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "chroot_dir",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, chroot_dir),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "is_root_rw",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, is_root_rw),
    NULL,
    &nsjail__ns_jail_config__is_root_rw__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "hostname",
    6,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, hostname),
    NULL,
    &nsjail__ns_jail_config__hostname__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cwd",
    7,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, cwd),
    NULL,
    &nsjail__ns_jail_config__cwd__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "port",
    8,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, port),
    NULL,
    &nsjail__ns_jail_config__port__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "bindhost",
    9,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, bindhost),
    NULL,
    &nsjail__ns_jail_config__bindhost__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "max_conns_per_ip",
    10,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, max_conns_per_ip),
    NULL,
    &nsjail__ns_jail_config__max_conns_per_ip__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "time_limit",
    11,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, time_limit),
    NULL,
    &nsjail__ns_jail_config__time_limit__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "daemon",
    12,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, daemon),
    NULL,
    &nsjail__ns_jail_config__daemon__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "log_file",
    13,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, log_file),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "log_level",
    14,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    offsetof(Nsjail__NsJailConfig, has_log_level),
    offsetof(Nsjail__NsJailConfig, log_level),
    &nsjail__log_level__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "keep_env",
    15,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, keep_env),
    NULL,
    &nsjail__ns_jail_config__keep_env__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "silent",
    16,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, silent),
    NULL,
    &nsjail__ns_jail_config__silent__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "skip_setsid",
    17,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, skip_setsid),
    NULL,
    &nsjail__ns_jail_config__skip_setsid__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pass_fd",
    18,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Nsjail__NsJailConfig, n_pass_fd),
    offsetof(Nsjail__NsJailConfig, pass_fd),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pivot_root_only",
    19,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, pivot_root_only),
    NULL,
    &nsjail__ns_jail_config__pivot_root_only__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "disable_no_new_privs",
    20,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, disable_no_new_privs),
    NULL,
    &nsjail__ns_jail_config__disable_no_new_privs__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rlimit_as",
    21,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, rlimit_as),
    NULL,
    &nsjail__ns_jail_config__rlimit_as__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rlimit_core",
    22,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, rlimit_core),
    NULL,
    &nsjail__ns_jail_config__rlimit_core__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rlimit_cpu",
    23,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, rlimit_cpu),
    NULL,
    &nsjail__ns_jail_config__rlimit_cpu__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rlimit_fsize",
    24,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, rlimit_fsize),
    NULL,
    &nsjail__ns_jail_config__rlimit_fsize__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rlimit_nofile",
    25,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, rlimit_nofile),
    NULL,
    &nsjail__ns_jail_config__rlimit_nofile__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rlimit_nproc",
    26,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT64,
    offsetof(Nsjail__NsJailConfig, has_rlimit_nproc),
    offsetof(Nsjail__NsJailConfig, rlimit_nproc),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rlimit_stack",
    27,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT64,
    offsetof(Nsjail__NsJailConfig, has_rlimit_stack),
    offsetof(Nsjail__NsJailConfig, rlimit_stack),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "persona_addr_compat_layout",
    28,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, persona_addr_compat_layout),
    NULL,
    &nsjail__ns_jail_config__persona_addr_compat_layout__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "persona_mmap_page_zero",
    29,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, persona_mmap_page_zero),
    NULL,
    &nsjail__ns_jail_config__persona_mmap_page_zero__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "persona_read_implies_exec",
    30,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, persona_read_implies_exec),
    NULL,
    &nsjail__ns_jail_config__persona_read_implies_exec__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "persona_addr_limit_3gb",
    31,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, persona_addr_limit_3gb),
    NULL,
    &nsjail__ns_jail_config__persona_addr_limit_3gb__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "persona_addr_no_randomize",
    32,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, persona_addr_no_randomize),
    NULL,
    &nsjail__ns_jail_config__persona_addr_no_randomize__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "clone_newnet",
    33,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, clone_newnet),
    NULL,
    &nsjail__ns_jail_config__clone_newnet__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "clone_newuser",
    34,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, clone_newuser),
    NULL,
    &nsjail__ns_jail_config__clone_newuser__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "clone_newns",
    35,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, clone_newns),
    NULL,
    &nsjail__ns_jail_config__clone_newns__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "clone_newpid",
    36,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, clone_newpid),
    NULL,
    &nsjail__ns_jail_config__clone_newpid__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "clone_newipc",
    37,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, clone_newipc),
    NULL,
    &nsjail__ns_jail_config__clone_newipc__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "clone_newuts",
    38,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, clone_newuts),
    NULL,
    &nsjail__ns_jail_config__clone_newuts__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "clone_newcgroup",
    39,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, clone_newcgroup),
    NULL,
    &nsjail__ns_jail_config__clone_newcgroup__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "uidmap",
    40,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Nsjail__NsJailConfig, n_uidmap),
    offsetof(Nsjail__NsJailConfig, uidmap),
    &nsjail__id_map__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "gidmap",
    41,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Nsjail__NsJailConfig, n_gidmap),
    offsetof(Nsjail__NsJailConfig, gidmap),
    &nsjail__id_map__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "mount",
    42,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Nsjail__NsJailConfig, n_mount),
    offsetof(Nsjail__NsJailConfig, mount),
    &nsjail__mount_pt__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "mount_proc",
    43,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, mount_proc),
    NULL,
    &nsjail__ns_jail_config__mount_proc__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "seccomp_policy_file",
    44,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, seccomp_policy_file),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "seccomp_string",
    45,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, seccomp_string),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cgroup_mem_max",
    46,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, cgroup_mem_max),
    NULL,
    &nsjail__ns_jail_config__cgroup_mem_max__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cgroup_mem_mount",
    47,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, cgroup_mem_mount),
    NULL,
    &nsjail__ns_jail_config__cgroup_mem_mount__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cgroup_mem_parent",
    48,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, cgroup_mem_parent),
    NULL,
    &nsjail__ns_jail_config__cgroup_mem_parent__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cgroup_pids_max",
    49,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, cgroup_pids_max),
    NULL,
    &nsjail__ns_jail_config__cgroup_pids_max__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cgroup_pids_mount",
    50,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, cgroup_pids_mount),
    NULL,
    &nsjail__ns_jail_config__cgroup_pids_mount__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cgroup_pids_parent",
    51,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, cgroup_pids_parent),
    NULL,
    &nsjail__ns_jail_config__cgroup_pids_parent__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "iface_no_lo",
    52,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, iface_no_lo),
    NULL,
    &nsjail__ns_jail_config__iface_no_lo__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "macvlan_iface",
    53,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, macvlan_iface),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "macvlan_vs_ip",
    54,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, macvlan_vs_ip),
    NULL,
    &nsjail__ns_jail_config__macvlan_vs_ip__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "macvlan_vs_nm",
    55,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, macvlan_vs_nm),
    NULL,
    &nsjail__ns_jail_config__macvlan_vs_nm__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "macvlan_vs_gw",
    56,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, macvlan_vs_gw),
    NULL,
    &nsjail__ns_jail_config__macvlan_vs_gw__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "exec_bin",
    57,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Nsjail__NsJailConfig, exec_bin),
    &nsjail__exe__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned nsjail__ns_jail_config__field_indices_by_name[] = {
  6,   /* field[6] = bindhost */
  43,   /* field[43] = cgroup_mem_max */
  44,   /* field[44] = cgroup_mem_mount */
  45,   /* field[45] = cgroup_mem_parent */
  46,   /* field[46] = cgroup_pids_max */
  47,   /* field[47] = cgroup_pids_mount */
  48,   /* field[48] = cgroup_pids_parent */
  1,   /* field[1] = chroot_dir */
  36,   /* field[36] = clone_newcgroup */
  34,   /* field[34] = clone_newipc */
  30,   /* field[30] = clone_newnet */
  32,   /* field[32] = clone_newns */
  33,   /* field[33] = clone_newpid */
  31,   /* field[31] = clone_newuser */
  35,   /* field[35] = clone_newuts */
  4,   /* field[4] = cwd */
  9,   /* field[9] = daemon */
  17,   /* field[17] = disable_no_new_privs */
  54,   /* field[54] = exec_bin */
  38,   /* field[38] = gidmap */
  3,   /* field[3] = hostname */
  49,   /* field[49] = iface_no_lo */
  2,   /* field[2] = is_root_rw */
  12,   /* field[12] = keep_env */
  10,   /* field[10] = log_file */
  11,   /* field[11] = log_level */
  50,   /* field[50] = macvlan_iface */
  53,   /* field[53] = macvlan_vs_gw */
  51,   /* field[51] = macvlan_vs_ip */
  52,   /* field[52] = macvlan_vs_nm */
  7,   /* field[7] = max_conns_per_ip */
  0,   /* field[0] = mode */
  39,   /* field[39] = mount */
  40,   /* field[40] = mount_proc */
  15,   /* field[15] = pass_fd */
  25,   /* field[25] = persona_addr_compat_layout */
  28,   /* field[28] = persona_addr_limit_3gb */
  29,   /* field[29] = persona_addr_no_randomize */
  26,   /* field[26] = persona_mmap_page_zero */
  27,   /* field[27] = persona_read_implies_exec */
  16,   /* field[16] = pivot_root_only */
  5,   /* field[5] = port */
  18,   /* field[18] = rlimit_as */
  19,   /* field[19] = rlimit_core */
  20,   /* field[20] = rlimit_cpu */
  21,   /* field[21] = rlimit_fsize */
  22,   /* field[22] = rlimit_nofile */
  23,   /* field[23] = rlimit_nproc */
  24,   /* field[24] = rlimit_stack */
  41,   /* field[41] = seccomp_policy_file */
  42,   /* field[42] = seccomp_string */
  13,   /* field[13] = silent */
  14,   /* field[14] = skip_setsid */
  8,   /* field[8] = time_limit */
  37,   /* field[37] = uidmap */
};
static const ProtobufCIntRange nsjail__ns_jail_config__number_ranges[2 + 1] =
{
  { 1, 0 },
  { 6, 3 },
  { 0, 55 }
};
const ProtobufCMessageDescriptor nsjail__ns_jail_config__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "nsjail.NsJailConfig",
  "NsJailConfig",
  "Nsjail__NsJailConfig",
  "nsjail",
  sizeof(Nsjail__NsJailConfig),
  55,
  nsjail__ns_jail_config__field_descriptors,
  nsjail__ns_jail_config__field_indices_by_name,
  2,  nsjail__ns_jail_config__number_ranges,
  (ProtobufCMessageInit) nsjail__ns_jail_config__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue nsjail__mode__enum_values_by_number[4] =
{
  { "LISTEN", "NSJAIL__MODE__LISTEN", 0 },
  { "ONCE", "NSJAIL__MODE__ONCE", 1 },
  { "RERUN", "NSJAIL__MODE__RERUN", 2 },
  { "EXECVE", "NSJAIL__MODE__EXECVE", 3 },
};
static const ProtobufCIntRange nsjail__mode__value_ranges[] = {
{0, 0},{0, 4}
};
static const ProtobufCEnumValueIndex nsjail__mode__enum_values_by_name[4] =
{
  { "EXECVE", 3 },
  { "LISTEN", 0 },
  { "ONCE", 1 },
  { "RERUN", 2 },
};
const ProtobufCEnumDescriptor nsjail__mode__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "nsjail.Mode",
  "Mode",
  "Nsjail__Mode",
  "nsjail",
  4,
  nsjail__mode__enum_values_by_number,
  4,
  nsjail__mode__enum_values_by_name,
  1,
  nsjail__mode__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCEnumValue nsjail__log_level__enum_values_by_number[5] =
{
  { "DEBUG", "NSJAIL__LOG_LEVEL__DEBUG", 0 },
  { "INFO", "NSJAIL__LOG_LEVEL__INFO", 1 },
  { "WARNING", "NSJAIL__LOG_LEVEL__WARNING", 2 },
  { "ERROR", "NSJAIL__LOG_LEVEL__ERROR", 3 },
  { "FATAL", "NSJAIL__LOG_LEVEL__FATAL", 4 },
};
static const ProtobufCIntRange nsjail__log_level__value_ranges[] = {
{0, 0},{0, 5}
};
static const ProtobufCEnumValueIndex nsjail__log_level__enum_values_by_name[5] =
{
  { "DEBUG", 0 },
  { "ERROR", 3 },
  { "FATAL", 4 },
  { "INFO", 1 },
  { "WARNING", 2 },
};
const ProtobufCEnumDescriptor nsjail__log_level__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "nsjail.LogLevel",
  "LogLevel",
  "Nsjail__LogLevel",
  "nsjail",
  5,
  nsjail__log_level__enum_values_by_number,
  5,
  nsjail__log_level__enum_values_by_name,
  1,
  nsjail__log_level__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};