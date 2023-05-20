// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from olympic_interfaces:action/Rings.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "olympic_interfaces/action/detail/rings__rosidl_typesupport_introspection_c.h"
#include "olympic_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "olympic_interfaces/action/detail/rings__functions.h"
#include "olympic_interfaces/action/detail/rings__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Rings_Goal__rosidl_typesupport_introspection_c__Rings_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  olympic_interfaces__action__Rings_Goal__init(message_memory);
}

void Rings_Goal__rosidl_typesupport_introspection_c__Rings_Goal_fini_function(void * message_memory)
{
  olympic_interfaces__action__Rings_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Rings_Goal__rosidl_typesupport_introspection_c__Rings_Goal_message_member_array[1] = {
  {
    "radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(olympic_interfaces__action__Rings_Goal, radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Rings_Goal__rosidl_typesupport_introspection_c__Rings_Goal_message_members = {
  "olympic_interfaces__action",  // message namespace
  "Rings_Goal",  // message name
  1,  // number of fields
  sizeof(olympic_interfaces__action__Rings_Goal),
  Rings_Goal__rosidl_typesupport_introspection_c__Rings_Goal_message_member_array,  // message members
  Rings_Goal__rosidl_typesupport_introspection_c__Rings_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Rings_Goal__rosidl_typesupport_introspection_c__Rings_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Rings_Goal__rosidl_typesupport_introspection_c__Rings_Goal_message_type_support_handle = {
  0,
  &Rings_Goal__rosidl_typesupport_introspection_c__Rings_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_olympic_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, olympic_interfaces, action, Rings_Goal)() {
  if (!Rings_Goal__rosidl_typesupport_introspection_c__Rings_Goal_message_type_support_handle.typesupport_identifier) {
    Rings_Goal__rosidl_typesupport_introspection_c__Rings_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Rings_Goal__rosidl_typesupport_introspection_c__Rings_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "olympic_interfaces/action/detail/rings__rosidl_typesupport_introspection_c.h"
// already included above
// #include "olympic_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "olympic_interfaces/action/detail/rings__functions.h"
// already included above
// #include "olympic_interfaces/action/detail/rings__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Rings_Result__rosidl_typesupport_introspection_c__Rings_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  olympic_interfaces__action__Rings_Result__init(message_memory);
}

void Rings_Result__rosidl_typesupport_introspection_c__Rings_Result_fini_function(void * message_memory)
{
  olympic_interfaces__action__Rings_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Rings_Result__rosidl_typesupport_introspection_c__Rings_Result_message_member_array[1] = {
  {
    "rings_completed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(olympic_interfaces__action__Rings_Result, rings_completed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Rings_Result__rosidl_typesupport_introspection_c__Rings_Result_message_members = {
  "olympic_interfaces__action",  // message namespace
  "Rings_Result",  // message name
  1,  // number of fields
  sizeof(olympic_interfaces__action__Rings_Result),
  Rings_Result__rosidl_typesupport_introspection_c__Rings_Result_message_member_array,  // message members
  Rings_Result__rosidl_typesupport_introspection_c__Rings_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Rings_Result__rosidl_typesupport_introspection_c__Rings_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Rings_Result__rosidl_typesupport_introspection_c__Rings_Result_message_type_support_handle = {
  0,
  &Rings_Result__rosidl_typesupport_introspection_c__Rings_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_olympic_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, olympic_interfaces, action, Rings_Result)() {
  if (!Rings_Result__rosidl_typesupport_introspection_c__Rings_Result_message_type_support_handle.typesupport_identifier) {
    Rings_Result__rosidl_typesupport_introspection_c__Rings_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Rings_Result__rosidl_typesupport_introspection_c__Rings_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "olympic_interfaces/action/detail/rings__rosidl_typesupport_introspection_c.h"
// already included above
// #include "olympic_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "olympic_interfaces/action/detail/rings__functions.h"
// already included above
// #include "olympic_interfaces/action/detail/rings__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Rings_Feedback__rosidl_typesupport_introspection_c__Rings_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  olympic_interfaces__action__Rings_Feedback__init(message_memory);
}

void Rings_Feedback__rosidl_typesupport_introspection_c__Rings_Feedback_fini_function(void * message_memory)
{
  olympic_interfaces__action__Rings_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Rings_Feedback__rosidl_typesupport_introspection_c__Rings_Feedback_message_member_array[2] = {
  {
    "drawing_ring",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(olympic_interfaces__action__Rings_Feedback, drawing_ring),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ring_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(olympic_interfaces__action__Rings_Feedback, ring_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Rings_Feedback__rosidl_typesupport_introspection_c__Rings_Feedback_message_members = {
  "olympic_interfaces__action",  // message namespace
  "Rings_Feedback",  // message name
  2,  // number of fields
  sizeof(olympic_interfaces__action__Rings_Feedback),
  Rings_Feedback__rosidl_typesupport_introspection_c__Rings_Feedback_message_member_array,  // message members
  Rings_Feedback__rosidl_typesupport_introspection_c__Rings_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Rings_Feedback__rosidl_typesupport_introspection_c__Rings_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Rings_Feedback__rosidl_typesupport_introspection_c__Rings_Feedback_message_type_support_handle = {
  0,
  &Rings_Feedback__rosidl_typesupport_introspection_c__Rings_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_olympic_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, olympic_interfaces, action, Rings_Feedback)() {
  if (!Rings_Feedback__rosidl_typesupport_introspection_c__Rings_Feedback_message_type_support_handle.typesupport_identifier) {
    Rings_Feedback__rosidl_typesupport_introspection_c__Rings_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Rings_Feedback__rosidl_typesupport_introspection_c__Rings_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "olympic_interfaces/action/detail/rings__rosidl_typesupport_introspection_c.h"
// already included above
// #include "olympic_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "olympic_interfaces/action/detail/rings__functions.h"
// already included above
// #include "olympic_interfaces/action/detail/rings__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "olympic_interfaces/action/rings.h"
// Member `goal`
// already included above
// #include "olympic_interfaces/action/detail/rings__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Rings_SendGoal_Request__rosidl_typesupport_introspection_c__Rings_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  olympic_interfaces__action__Rings_SendGoal_Request__init(message_memory);
}

void Rings_SendGoal_Request__rosidl_typesupport_introspection_c__Rings_SendGoal_Request_fini_function(void * message_memory)
{
  olympic_interfaces__action__Rings_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Rings_SendGoal_Request__rosidl_typesupport_introspection_c__Rings_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(olympic_interfaces__action__Rings_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(olympic_interfaces__action__Rings_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Rings_SendGoal_Request__rosidl_typesupport_introspection_c__Rings_SendGoal_Request_message_members = {
  "olympic_interfaces__action",  // message namespace
  "Rings_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(olympic_interfaces__action__Rings_SendGoal_Request),
  Rings_SendGoal_Request__rosidl_typesupport_introspection_c__Rings_SendGoal_Request_message_member_array,  // message members
  Rings_SendGoal_Request__rosidl_typesupport_introspection_c__Rings_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Rings_SendGoal_Request__rosidl_typesupport_introspection_c__Rings_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Rings_SendGoal_Request__rosidl_typesupport_introspection_c__Rings_SendGoal_Request_message_type_support_handle = {
  0,
  &Rings_SendGoal_Request__rosidl_typesupport_introspection_c__Rings_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_olympic_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, olympic_interfaces, action, Rings_SendGoal_Request)() {
  Rings_SendGoal_Request__rosidl_typesupport_introspection_c__Rings_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Rings_SendGoal_Request__rosidl_typesupport_introspection_c__Rings_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, olympic_interfaces, action, Rings_Goal)();
  if (!Rings_SendGoal_Request__rosidl_typesupport_introspection_c__Rings_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    Rings_SendGoal_Request__rosidl_typesupport_introspection_c__Rings_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Rings_SendGoal_Request__rosidl_typesupport_introspection_c__Rings_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "olympic_interfaces/action/detail/rings__rosidl_typesupport_introspection_c.h"
// already included above
// #include "olympic_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "olympic_interfaces/action/detail/rings__functions.h"
// already included above
// #include "olympic_interfaces/action/detail/rings__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Rings_SendGoal_Response__rosidl_typesupport_introspection_c__Rings_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  olympic_interfaces__action__Rings_SendGoal_Response__init(message_memory);
}

void Rings_SendGoal_Response__rosidl_typesupport_introspection_c__Rings_SendGoal_Response_fini_function(void * message_memory)
{
  olympic_interfaces__action__Rings_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Rings_SendGoal_Response__rosidl_typesupport_introspection_c__Rings_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(olympic_interfaces__action__Rings_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(olympic_interfaces__action__Rings_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Rings_SendGoal_Response__rosidl_typesupport_introspection_c__Rings_SendGoal_Response_message_members = {
  "olympic_interfaces__action",  // message namespace
  "Rings_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(olympic_interfaces__action__Rings_SendGoal_Response),
  Rings_SendGoal_Response__rosidl_typesupport_introspection_c__Rings_SendGoal_Response_message_member_array,  // message members
  Rings_SendGoal_Response__rosidl_typesupport_introspection_c__Rings_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Rings_SendGoal_Response__rosidl_typesupport_introspection_c__Rings_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Rings_SendGoal_Response__rosidl_typesupport_introspection_c__Rings_SendGoal_Response_message_type_support_handle = {
  0,
  &Rings_SendGoal_Response__rosidl_typesupport_introspection_c__Rings_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_olympic_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, olympic_interfaces, action, Rings_SendGoal_Response)() {
  Rings_SendGoal_Response__rosidl_typesupport_introspection_c__Rings_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Rings_SendGoal_Response__rosidl_typesupport_introspection_c__Rings_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    Rings_SendGoal_Response__rosidl_typesupport_introspection_c__Rings_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Rings_SendGoal_Response__rosidl_typesupport_introspection_c__Rings_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "olympic_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "olympic_interfaces/action/detail/rings__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers olympic_interfaces__action__detail__rings__rosidl_typesupport_introspection_c__Rings_SendGoal_service_members = {
  "olympic_interfaces__action",  // service namespace
  "Rings_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // olympic_interfaces__action__detail__rings__rosidl_typesupport_introspection_c__Rings_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // olympic_interfaces__action__detail__rings__rosidl_typesupport_introspection_c__Rings_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t olympic_interfaces__action__detail__rings__rosidl_typesupport_introspection_c__Rings_SendGoal_service_type_support_handle = {
  0,
  &olympic_interfaces__action__detail__rings__rosidl_typesupport_introspection_c__Rings_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, olympic_interfaces, action, Rings_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, olympic_interfaces, action, Rings_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_olympic_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, olympic_interfaces, action, Rings_SendGoal)() {
  if (!olympic_interfaces__action__detail__rings__rosidl_typesupport_introspection_c__Rings_SendGoal_service_type_support_handle.typesupport_identifier) {
    olympic_interfaces__action__detail__rings__rosidl_typesupport_introspection_c__Rings_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)olympic_interfaces__action__detail__rings__rosidl_typesupport_introspection_c__Rings_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, olympic_interfaces, action, Rings_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, olympic_interfaces, action, Rings_SendGoal_Response)()->data;
  }

  return &olympic_interfaces__action__detail__rings__rosidl_typesupport_introspection_c__Rings_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "olympic_interfaces/action/detail/rings__rosidl_typesupport_introspection_c.h"
// already included above
// #include "olympic_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "olympic_interfaces/action/detail/rings__functions.h"
// already included above
// #include "olympic_interfaces/action/detail/rings__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Rings_GetResult_Request__rosidl_typesupport_introspection_c__Rings_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  olympic_interfaces__action__Rings_GetResult_Request__init(message_memory);
}

void Rings_GetResult_Request__rosidl_typesupport_introspection_c__Rings_GetResult_Request_fini_function(void * message_memory)
{
  olympic_interfaces__action__Rings_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Rings_GetResult_Request__rosidl_typesupport_introspection_c__Rings_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(olympic_interfaces__action__Rings_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Rings_GetResult_Request__rosidl_typesupport_introspection_c__Rings_GetResult_Request_message_members = {
  "olympic_interfaces__action",  // message namespace
  "Rings_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(olympic_interfaces__action__Rings_GetResult_Request),
  Rings_GetResult_Request__rosidl_typesupport_introspection_c__Rings_GetResult_Request_message_member_array,  // message members
  Rings_GetResult_Request__rosidl_typesupport_introspection_c__Rings_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Rings_GetResult_Request__rosidl_typesupport_introspection_c__Rings_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Rings_GetResult_Request__rosidl_typesupport_introspection_c__Rings_GetResult_Request_message_type_support_handle = {
  0,
  &Rings_GetResult_Request__rosidl_typesupport_introspection_c__Rings_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_olympic_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, olympic_interfaces, action, Rings_GetResult_Request)() {
  Rings_GetResult_Request__rosidl_typesupport_introspection_c__Rings_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!Rings_GetResult_Request__rosidl_typesupport_introspection_c__Rings_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    Rings_GetResult_Request__rosidl_typesupport_introspection_c__Rings_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Rings_GetResult_Request__rosidl_typesupport_introspection_c__Rings_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "olympic_interfaces/action/detail/rings__rosidl_typesupport_introspection_c.h"
// already included above
// #include "olympic_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "olympic_interfaces/action/detail/rings__functions.h"
// already included above
// #include "olympic_interfaces/action/detail/rings__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "olympic_interfaces/action/rings.h"
// Member `result`
// already included above
// #include "olympic_interfaces/action/detail/rings__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Rings_GetResult_Response__rosidl_typesupport_introspection_c__Rings_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  olympic_interfaces__action__Rings_GetResult_Response__init(message_memory);
}

void Rings_GetResult_Response__rosidl_typesupport_introspection_c__Rings_GetResult_Response_fini_function(void * message_memory)
{
  olympic_interfaces__action__Rings_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Rings_GetResult_Response__rosidl_typesupport_introspection_c__Rings_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(olympic_interfaces__action__Rings_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(olympic_interfaces__action__Rings_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Rings_GetResult_Response__rosidl_typesupport_introspection_c__Rings_GetResult_Response_message_members = {
  "olympic_interfaces__action",  // message namespace
  "Rings_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(olympic_interfaces__action__Rings_GetResult_Response),
  Rings_GetResult_Response__rosidl_typesupport_introspection_c__Rings_GetResult_Response_message_member_array,  // message members
  Rings_GetResult_Response__rosidl_typesupport_introspection_c__Rings_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Rings_GetResult_Response__rosidl_typesupport_introspection_c__Rings_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Rings_GetResult_Response__rosidl_typesupport_introspection_c__Rings_GetResult_Response_message_type_support_handle = {
  0,
  &Rings_GetResult_Response__rosidl_typesupport_introspection_c__Rings_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_olympic_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, olympic_interfaces, action, Rings_GetResult_Response)() {
  Rings_GetResult_Response__rosidl_typesupport_introspection_c__Rings_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, olympic_interfaces, action, Rings_Result)();
  if (!Rings_GetResult_Response__rosidl_typesupport_introspection_c__Rings_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    Rings_GetResult_Response__rosidl_typesupport_introspection_c__Rings_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Rings_GetResult_Response__rosidl_typesupport_introspection_c__Rings_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "olympic_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "olympic_interfaces/action/detail/rings__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers olympic_interfaces__action__detail__rings__rosidl_typesupport_introspection_c__Rings_GetResult_service_members = {
  "olympic_interfaces__action",  // service namespace
  "Rings_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // olympic_interfaces__action__detail__rings__rosidl_typesupport_introspection_c__Rings_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // olympic_interfaces__action__detail__rings__rosidl_typesupport_introspection_c__Rings_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t olympic_interfaces__action__detail__rings__rosidl_typesupport_introspection_c__Rings_GetResult_service_type_support_handle = {
  0,
  &olympic_interfaces__action__detail__rings__rosidl_typesupport_introspection_c__Rings_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, olympic_interfaces, action, Rings_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, olympic_interfaces, action, Rings_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_olympic_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, olympic_interfaces, action, Rings_GetResult)() {
  if (!olympic_interfaces__action__detail__rings__rosidl_typesupport_introspection_c__Rings_GetResult_service_type_support_handle.typesupport_identifier) {
    olympic_interfaces__action__detail__rings__rosidl_typesupport_introspection_c__Rings_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)olympic_interfaces__action__detail__rings__rosidl_typesupport_introspection_c__Rings_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, olympic_interfaces, action, Rings_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, olympic_interfaces, action, Rings_GetResult_Response)()->data;
  }

  return &olympic_interfaces__action__detail__rings__rosidl_typesupport_introspection_c__Rings_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "olympic_interfaces/action/detail/rings__rosidl_typesupport_introspection_c.h"
// already included above
// #include "olympic_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "olympic_interfaces/action/detail/rings__functions.h"
// already included above
// #include "olympic_interfaces/action/detail/rings__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "olympic_interfaces/action/rings.h"
// Member `feedback`
// already included above
// #include "olympic_interfaces/action/detail/rings__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Rings_FeedbackMessage__rosidl_typesupport_introspection_c__Rings_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  olympic_interfaces__action__Rings_FeedbackMessage__init(message_memory);
}

void Rings_FeedbackMessage__rosidl_typesupport_introspection_c__Rings_FeedbackMessage_fini_function(void * message_memory)
{
  olympic_interfaces__action__Rings_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Rings_FeedbackMessage__rosidl_typesupport_introspection_c__Rings_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(olympic_interfaces__action__Rings_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(olympic_interfaces__action__Rings_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Rings_FeedbackMessage__rosidl_typesupport_introspection_c__Rings_FeedbackMessage_message_members = {
  "olympic_interfaces__action",  // message namespace
  "Rings_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(olympic_interfaces__action__Rings_FeedbackMessage),
  Rings_FeedbackMessage__rosidl_typesupport_introspection_c__Rings_FeedbackMessage_message_member_array,  // message members
  Rings_FeedbackMessage__rosidl_typesupport_introspection_c__Rings_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Rings_FeedbackMessage__rosidl_typesupport_introspection_c__Rings_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Rings_FeedbackMessage__rosidl_typesupport_introspection_c__Rings_FeedbackMessage_message_type_support_handle = {
  0,
  &Rings_FeedbackMessage__rosidl_typesupport_introspection_c__Rings_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_olympic_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, olympic_interfaces, action, Rings_FeedbackMessage)() {
  Rings_FeedbackMessage__rosidl_typesupport_introspection_c__Rings_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Rings_FeedbackMessage__rosidl_typesupport_introspection_c__Rings_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, olympic_interfaces, action, Rings_Feedback)();
  if (!Rings_FeedbackMessage__rosidl_typesupport_introspection_c__Rings_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    Rings_FeedbackMessage__rosidl_typesupport_introspection_c__Rings_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Rings_FeedbackMessage__rosidl_typesupport_introspection_c__Rings_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
