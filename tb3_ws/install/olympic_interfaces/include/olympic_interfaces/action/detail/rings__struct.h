// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from olympic_interfaces:action/Rings.idl
// generated code does not contain a copyright notice

#ifndef OLYMPIC_INTERFACES__ACTION__DETAIL__RINGS__STRUCT_H_
#define OLYMPIC_INTERFACES__ACTION__DETAIL__RINGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/Rings in the package olympic_interfaces.
typedef struct olympic_interfaces__action__Rings_Goal
{
  float radius;
} olympic_interfaces__action__Rings_Goal;

// Struct for a sequence of olympic_interfaces__action__Rings_Goal.
typedef struct olympic_interfaces__action__Rings_Goal__Sequence
{
  olympic_interfaces__action__Rings_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} olympic_interfaces__action__Rings_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/Rings in the package olympic_interfaces.
typedef struct olympic_interfaces__action__Rings_Result
{
  int32_t rings_completed;
} olympic_interfaces__action__Rings_Result;

// Struct for a sequence of olympic_interfaces__action__Rings_Result.
typedef struct olympic_interfaces__action__Rings_Result__Sequence
{
  olympic_interfaces__action__Rings_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} olympic_interfaces__action__Rings_Result__Sequence;


// Constants defined in the message

// Struct defined in action/Rings in the package olympic_interfaces.
typedef struct olympic_interfaces__action__Rings_Feedback
{
  int32_t drawing_ring;
  float ring_angle;
} olympic_interfaces__action__Rings_Feedback;

// Struct for a sequence of olympic_interfaces__action__Rings_Feedback.
typedef struct olympic_interfaces__action__Rings_Feedback__Sequence
{
  olympic_interfaces__action__Rings_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} olympic_interfaces__action__Rings_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "olympic_interfaces/action/detail/rings__struct.h"

// Struct defined in action/Rings in the package olympic_interfaces.
typedef struct olympic_interfaces__action__Rings_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  olympic_interfaces__action__Rings_Goal goal;
} olympic_interfaces__action__Rings_SendGoal_Request;

// Struct for a sequence of olympic_interfaces__action__Rings_SendGoal_Request.
typedef struct olympic_interfaces__action__Rings_SendGoal_Request__Sequence
{
  olympic_interfaces__action__Rings_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} olympic_interfaces__action__Rings_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Rings in the package olympic_interfaces.
typedef struct olympic_interfaces__action__Rings_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} olympic_interfaces__action__Rings_SendGoal_Response;

// Struct for a sequence of olympic_interfaces__action__Rings_SendGoal_Response.
typedef struct olympic_interfaces__action__Rings_SendGoal_Response__Sequence
{
  olympic_interfaces__action__Rings_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} olympic_interfaces__action__Rings_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Rings in the package olympic_interfaces.
typedef struct olympic_interfaces__action__Rings_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} olympic_interfaces__action__Rings_GetResult_Request;

// Struct for a sequence of olympic_interfaces__action__Rings_GetResult_Request.
typedef struct olympic_interfaces__action__Rings_GetResult_Request__Sequence
{
  olympic_interfaces__action__Rings_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} olympic_interfaces__action__Rings_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "olympic_interfaces/action/detail/rings__struct.h"

// Struct defined in action/Rings in the package olympic_interfaces.
typedef struct olympic_interfaces__action__Rings_GetResult_Response
{
  int8_t status;
  olympic_interfaces__action__Rings_Result result;
} olympic_interfaces__action__Rings_GetResult_Response;

// Struct for a sequence of olympic_interfaces__action__Rings_GetResult_Response.
typedef struct olympic_interfaces__action__Rings_GetResult_Response__Sequence
{
  olympic_interfaces__action__Rings_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} olympic_interfaces__action__Rings_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "olympic_interfaces/action/detail/rings__struct.h"

// Struct defined in action/Rings in the package olympic_interfaces.
typedef struct olympic_interfaces__action__Rings_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  olympic_interfaces__action__Rings_Feedback feedback;
} olympic_interfaces__action__Rings_FeedbackMessage;

// Struct for a sequence of olympic_interfaces__action__Rings_FeedbackMessage.
typedef struct olympic_interfaces__action__Rings_FeedbackMessage__Sequence
{
  olympic_interfaces__action__Rings_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} olympic_interfaces__action__Rings_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OLYMPIC_INTERFACES__ACTION__DETAIL__RINGS__STRUCT_H_
