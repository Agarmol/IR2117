// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from olympic_interfaces:action/Rings.idl
// generated code does not contain a copyright notice

#ifndef OLYMPIC_INTERFACES__ACTION__DETAIL__RINGS__TRAITS_HPP_
#define OLYMPIC_INTERFACES__ACTION__DETAIL__RINGS__TRAITS_HPP_

#include "olympic_interfaces/action/detail/rings__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<olympic_interfaces::action::Rings_Goal>()
{
  return "olympic_interfaces::action::Rings_Goal";
}

template<>
inline const char * name<olympic_interfaces::action::Rings_Goal>()
{
  return "olympic_interfaces/action/Rings_Goal";
}

template<>
struct has_fixed_size<olympic_interfaces::action::Rings_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<olympic_interfaces::action::Rings_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<olympic_interfaces::action::Rings_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<olympic_interfaces::action::Rings_Result>()
{
  return "olympic_interfaces::action::Rings_Result";
}

template<>
inline const char * name<olympic_interfaces::action::Rings_Result>()
{
  return "olympic_interfaces/action/Rings_Result";
}

template<>
struct has_fixed_size<olympic_interfaces::action::Rings_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<olympic_interfaces::action::Rings_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<olympic_interfaces::action::Rings_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<olympic_interfaces::action::Rings_Feedback>()
{
  return "olympic_interfaces::action::Rings_Feedback";
}

template<>
inline const char * name<olympic_interfaces::action::Rings_Feedback>()
{
  return "olympic_interfaces/action/Rings_Feedback";
}

template<>
struct has_fixed_size<olympic_interfaces::action::Rings_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<olympic_interfaces::action::Rings_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<olympic_interfaces::action::Rings_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "olympic_interfaces/action/detail/rings__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<olympic_interfaces::action::Rings_SendGoal_Request>()
{
  return "olympic_interfaces::action::Rings_SendGoal_Request";
}

template<>
inline const char * name<olympic_interfaces::action::Rings_SendGoal_Request>()
{
  return "olympic_interfaces/action/Rings_SendGoal_Request";
}

template<>
struct has_fixed_size<olympic_interfaces::action::Rings_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<olympic_interfaces::action::Rings_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<olympic_interfaces::action::Rings_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<olympic_interfaces::action::Rings_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<olympic_interfaces::action::Rings_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<olympic_interfaces::action::Rings_SendGoal_Response>()
{
  return "olympic_interfaces::action::Rings_SendGoal_Response";
}

template<>
inline const char * name<olympic_interfaces::action::Rings_SendGoal_Response>()
{
  return "olympic_interfaces/action/Rings_SendGoal_Response";
}

template<>
struct has_fixed_size<olympic_interfaces::action::Rings_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<olympic_interfaces::action::Rings_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<olympic_interfaces::action::Rings_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<olympic_interfaces::action::Rings_SendGoal>()
{
  return "olympic_interfaces::action::Rings_SendGoal";
}

template<>
inline const char * name<olympic_interfaces::action::Rings_SendGoal>()
{
  return "olympic_interfaces/action/Rings_SendGoal";
}

template<>
struct has_fixed_size<olympic_interfaces::action::Rings_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<olympic_interfaces::action::Rings_SendGoal_Request>::value &&
    has_fixed_size<olympic_interfaces::action::Rings_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<olympic_interfaces::action::Rings_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<olympic_interfaces::action::Rings_SendGoal_Request>::value &&
    has_bounded_size<olympic_interfaces::action::Rings_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<olympic_interfaces::action::Rings_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<olympic_interfaces::action::Rings_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<olympic_interfaces::action::Rings_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<olympic_interfaces::action::Rings_GetResult_Request>()
{
  return "olympic_interfaces::action::Rings_GetResult_Request";
}

template<>
inline const char * name<olympic_interfaces::action::Rings_GetResult_Request>()
{
  return "olympic_interfaces/action/Rings_GetResult_Request";
}

template<>
struct has_fixed_size<olympic_interfaces::action::Rings_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<olympic_interfaces::action::Rings_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<olympic_interfaces::action::Rings_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "olympic_interfaces/action/detail/rings__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<olympic_interfaces::action::Rings_GetResult_Response>()
{
  return "olympic_interfaces::action::Rings_GetResult_Response";
}

template<>
inline const char * name<olympic_interfaces::action::Rings_GetResult_Response>()
{
  return "olympic_interfaces/action/Rings_GetResult_Response";
}

template<>
struct has_fixed_size<olympic_interfaces::action::Rings_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<olympic_interfaces::action::Rings_Result>::value> {};

template<>
struct has_bounded_size<olympic_interfaces::action::Rings_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<olympic_interfaces::action::Rings_Result>::value> {};

template<>
struct is_message<olympic_interfaces::action::Rings_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<olympic_interfaces::action::Rings_GetResult>()
{
  return "olympic_interfaces::action::Rings_GetResult";
}

template<>
inline const char * name<olympic_interfaces::action::Rings_GetResult>()
{
  return "olympic_interfaces/action/Rings_GetResult";
}

template<>
struct has_fixed_size<olympic_interfaces::action::Rings_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<olympic_interfaces::action::Rings_GetResult_Request>::value &&
    has_fixed_size<olympic_interfaces::action::Rings_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<olympic_interfaces::action::Rings_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<olympic_interfaces::action::Rings_GetResult_Request>::value &&
    has_bounded_size<olympic_interfaces::action::Rings_GetResult_Response>::value
  >
{
};

template<>
struct is_service<olympic_interfaces::action::Rings_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<olympic_interfaces::action::Rings_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<olympic_interfaces::action::Rings_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "olympic_interfaces/action/detail/rings__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<olympic_interfaces::action::Rings_FeedbackMessage>()
{
  return "olympic_interfaces::action::Rings_FeedbackMessage";
}

template<>
inline const char * name<olympic_interfaces::action::Rings_FeedbackMessage>()
{
  return "olympic_interfaces/action/Rings_FeedbackMessage";
}

template<>
struct has_fixed_size<olympic_interfaces::action::Rings_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<olympic_interfaces::action::Rings_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<olympic_interfaces::action::Rings_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<olympic_interfaces::action::Rings_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<olympic_interfaces::action::Rings_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<olympic_interfaces::action::Rings>
  : std::true_type
{
};

template<>
struct is_action_goal<olympic_interfaces::action::Rings_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<olympic_interfaces::action::Rings_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<olympic_interfaces::action::Rings_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // OLYMPIC_INTERFACES__ACTION__DETAIL__RINGS__TRAITS_HPP_
