// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from conveyor_interfaces:srv/SetMode.idl
// generated code does not contain a copyright notice

#include "conveyor_interfaces/srv/detail/set_mode__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_conveyor_interfaces
const rosidl_type_hash_t *
conveyor_interfaces__srv__SetMode__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe9, 0x43, 0x7b, 0x3e, 0x69, 0x7e, 0x29, 0xa8,
      0xc9, 0xd8, 0xd7, 0xbd, 0x66, 0x68, 0x52, 0x00,
      0x6d, 0x87, 0xd2, 0x3a, 0xcc, 0xaa, 0xab, 0x51,
      0xf4, 0xb1, 0xa6, 0x94, 0xc4, 0x42, 0xef, 0xa1,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_conveyor_interfaces
const rosidl_type_hash_t *
conveyor_interfaces__srv__SetMode_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfe, 0x41, 0x93, 0xd8, 0x38, 0xbe, 0xc8, 0x94,
      0x3f, 0xb9, 0x63, 0x24, 0xa6, 0x22, 0xfd, 0x2f,
      0x56, 0x99, 0xf8, 0x3c, 0x27, 0x92, 0x2d, 0x21,
      0x1e, 0x42, 0x7e, 0xa4, 0xc7, 0x83, 0xbb, 0xe1,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_conveyor_interfaces
const rosidl_type_hash_t *
conveyor_interfaces__srv__SetMode_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x91, 0xdd, 0x29, 0xd8, 0xc0, 0x02, 0x15, 0x4c,
      0x37, 0x9e, 0x12, 0xc7, 0x14, 0x66, 0x38, 0x72,
      0xd2, 0xce, 0x67, 0x7f, 0x6d, 0x4a, 0x82, 0xee,
      0x11, 0xaa, 0xb5, 0xa0, 0xf2, 0xf2, 0x1a, 0x12,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_conveyor_interfaces
const rosidl_type_hash_t *
conveyor_interfaces__srv__SetMode_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6b, 0xb1, 0xc0, 0x37, 0x9b, 0xfb, 0x74, 0xba,
      0x2c, 0x3d, 0x57, 0xd1, 0x56, 0x81, 0xf0, 0xdc,
      0x25, 0x06, 0x55, 0x9e, 0x4b, 0x71, 0x0a, 0xf2,
      0xe1, 0x0d, 0x14, 0x42, 0xc5, 0x5a, 0x2d, 0x14,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char conveyor_interfaces__srv__SetMode__TYPE_NAME[] = "conveyor_interfaces/srv/SetMode";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char conveyor_interfaces__srv__SetMode_Event__TYPE_NAME[] = "conveyor_interfaces/srv/SetMode_Event";
static char conveyor_interfaces__srv__SetMode_Request__TYPE_NAME[] = "conveyor_interfaces/srv/SetMode_Request";
static char conveyor_interfaces__srv__SetMode_Response__TYPE_NAME[] = "conveyor_interfaces/srv/SetMode_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char conveyor_interfaces__srv__SetMode__FIELD_NAME__request_message[] = "request_message";
static char conveyor_interfaces__srv__SetMode__FIELD_NAME__response_message[] = "response_message";
static char conveyor_interfaces__srv__SetMode__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field conveyor_interfaces__srv__SetMode__FIELDS[] = {
  {
    {conveyor_interfaces__srv__SetMode__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {conveyor_interfaces__srv__SetMode_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {conveyor_interfaces__srv__SetMode__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {conveyor_interfaces__srv__SetMode_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {conveyor_interfaces__srv__SetMode__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {conveyor_interfaces__srv__SetMode_Event__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription conveyor_interfaces__srv__SetMode__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {conveyor_interfaces__srv__SetMode_Event__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {conveyor_interfaces__srv__SetMode_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {conveyor_interfaces__srv__SetMode_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
conveyor_interfaces__srv__SetMode__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {conveyor_interfaces__srv__SetMode__TYPE_NAME, 31, 31},
      {conveyor_interfaces__srv__SetMode__FIELDS, 3, 3},
    },
    {conveyor_interfaces__srv__SetMode__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = conveyor_interfaces__srv__SetMode_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = conveyor_interfaces__srv__SetMode_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = conveyor_interfaces__srv__SetMode_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char conveyor_interfaces__srv__SetMode_Request__FIELD_NAME__mode[] = "mode";

static rosidl_runtime_c__type_description__Field conveyor_interfaces__srv__SetMode_Request__FIELDS[] = {
  {
    {conveyor_interfaces__srv__SetMode_Request__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
conveyor_interfaces__srv__SetMode_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {conveyor_interfaces__srv__SetMode_Request__TYPE_NAME, 39, 39},
      {conveyor_interfaces__srv__SetMode_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char conveyor_interfaces__srv__SetMode_Response__FIELD_NAME__success[] = "success";
static char conveyor_interfaces__srv__SetMode_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field conveyor_interfaces__srv__SetMode_Response__FIELDS[] = {
  {
    {conveyor_interfaces__srv__SetMode_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {conveyor_interfaces__srv__SetMode_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
conveyor_interfaces__srv__SetMode_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {conveyor_interfaces__srv__SetMode_Response__TYPE_NAME, 40, 40},
      {conveyor_interfaces__srv__SetMode_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char conveyor_interfaces__srv__SetMode_Event__FIELD_NAME__info[] = "info";
static char conveyor_interfaces__srv__SetMode_Event__FIELD_NAME__request[] = "request";
static char conveyor_interfaces__srv__SetMode_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field conveyor_interfaces__srv__SetMode_Event__FIELDS[] = {
  {
    {conveyor_interfaces__srv__SetMode_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {conveyor_interfaces__srv__SetMode_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {conveyor_interfaces__srv__SetMode_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {conveyor_interfaces__srv__SetMode_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {conveyor_interfaces__srv__SetMode_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription conveyor_interfaces__srv__SetMode_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {conveyor_interfaces__srv__SetMode_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {conveyor_interfaces__srv__SetMode_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
conveyor_interfaces__srv__SetMode_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {conveyor_interfaces__srv__SetMode_Event__TYPE_NAME, 37, 37},
      {conveyor_interfaces__srv__SetMode_Event__FIELDS, 3, 3},
    },
    {conveyor_interfaces__srv__SetMode_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = conveyor_interfaces__srv__SetMode_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = conveyor_interfaces__srv__SetMode_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string mode\n"
  "---\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
conveyor_interfaces__srv__SetMode__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {conveyor_interfaces__srv__SetMode__TYPE_NAME, 31, 31},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 43, 43},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
conveyor_interfaces__srv__SetMode_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {conveyor_interfaces__srv__SetMode_Request__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
conveyor_interfaces__srv__SetMode_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {conveyor_interfaces__srv__SetMode_Response__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
conveyor_interfaces__srv__SetMode_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {conveyor_interfaces__srv__SetMode_Event__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
conveyor_interfaces__srv__SetMode__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *conveyor_interfaces__srv__SetMode__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *conveyor_interfaces__srv__SetMode_Event__get_individual_type_description_source(NULL);
    sources[3] = *conveyor_interfaces__srv__SetMode_Request__get_individual_type_description_source(NULL);
    sources[4] = *conveyor_interfaces__srv__SetMode_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
conveyor_interfaces__srv__SetMode_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *conveyor_interfaces__srv__SetMode_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
conveyor_interfaces__srv__SetMode_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *conveyor_interfaces__srv__SetMode_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
conveyor_interfaces__srv__SetMode_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *conveyor_interfaces__srv__SetMode_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *conveyor_interfaces__srv__SetMode_Request__get_individual_type_description_source(NULL);
    sources[3] = *conveyor_interfaces__srv__SetMode_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
