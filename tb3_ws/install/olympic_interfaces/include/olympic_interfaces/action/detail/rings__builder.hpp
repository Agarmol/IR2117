// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from olympic_interfaces:action/Rings.idl
// generated code does not contain a copyright notice

#ifndef OLYMPIC_INTERFACES__ACTION__DETAIL__RINGS__BUILDER_HPP_
#define OLYMPIC_INTERFACES__ACTION__DETAIL__RINGS__BUILDER_HPP_

#include "olympic_interfaces/action/detail/rings__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace olympic_interfaces
{

namespace action
{

namespace builder
{

class Init_Rings_Goal_radius
{
public:
  Init_Rings_Goal_radius()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::olympic_interfaces::action::Rings_Goal radius(::olympic_interfaces::action::Rings_Goal::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::olympic_interfaces::action::Rings_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::olympic_interfaces::action::Rings_Goal>()
{
  return olympic_interfaces::action::builder::Init_Rings_Goal_radius();
}

}  // namespace olympic_interfaces


namespace olympic_interfaces
{

namespace action
{

namespace builder
{

class Init_Rings_Result_rings_completed
{
public:
  Init_Rings_Result_rings_completed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::olympic_interfaces::action::Rings_Result rings_completed(::olympic_interfaces::action::Rings_Result::_rings_completed_type arg)
  {
    msg_.rings_completed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::olympic_interfaces::action::Rings_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::olympic_interfaces::action::Rings_Result>()
{
  return olympic_interfaces::action::builder::Init_Rings_Result_rings_completed();
}

}  // namespace olympic_interfaces


namespace olympic_interfaces
{

namespace action
{

namespace builder
{

class Init_Rings_Feedback_ring_angle
{
public:
  explicit Init_Rings_Feedback_ring_angle(::olympic_interfaces::action::Rings_Feedback & msg)
  : msg_(msg)
  {}
  ::olympic_interfaces::action::Rings_Feedback ring_angle(::olympic_interfaces::action::Rings_Feedback::_ring_angle_type arg)
  {
    msg_.ring_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::olympic_interfaces::action::Rings_Feedback msg_;
};

class Init_Rings_Feedback_drawing_ring
{
public:
  Init_Rings_Feedback_drawing_ring()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rings_Feedback_ring_angle drawing_ring(::olympic_interfaces::action::Rings_Feedback::_drawing_ring_type arg)
  {
    msg_.drawing_ring = std::move(arg);
    return Init_Rings_Feedback_ring_angle(msg_);
  }

private:
  ::olympic_interfaces::action::Rings_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::olympic_interfaces::action::Rings_Feedback>()
{
  return olympic_interfaces::action::builder::Init_Rings_Feedback_drawing_ring();
}

}  // namespace olympic_interfaces


namespace olympic_interfaces
{

namespace action
{

namespace builder
{

class Init_Rings_SendGoal_Request_goal
{
public:
  explicit Init_Rings_SendGoal_Request_goal(::olympic_interfaces::action::Rings_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::olympic_interfaces::action::Rings_SendGoal_Request goal(::olympic_interfaces::action::Rings_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::olympic_interfaces::action::Rings_SendGoal_Request msg_;
};

class Init_Rings_SendGoal_Request_goal_id
{
public:
  Init_Rings_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rings_SendGoal_Request_goal goal_id(::olympic_interfaces::action::Rings_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Rings_SendGoal_Request_goal(msg_);
  }

private:
  ::olympic_interfaces::action::Rings_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::olympic_interfaces::action::Rings_SendGoal_Request>()
{
  return olympic_interfaces::action::builder::Init_Rings_SendGoal_Request_goal_id();
}

}  // namespace olympic_interfaces


namespace olympic_interfaces
{

namespace action
{

namespace builder
{

class Init_Rings_SendGoal_Response_stamp
{
public:
  explicit Init_Rings_SendGoal_Response_stamp(::olympic_interfaces::action::Rings_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::olympic_interfaces::action::Rings_SendGoal_Response stamp(::olympic_interfaces::action::Rings_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::olympic_interfaces::action::Rings_SendGoal_Response msg_;
};

class Init_Rings_SendGoal_Response_accepted
{
public:
  Init_Rings_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rings_SendGoal_Response_stamp accepted(::olympic_interfaces::action::Rings_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Rings_SendGoal_Response_stamp(msg_);
  }

private:
  ::olympic_interfaces::action::Rings_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::olympic_interfaces::action::Rings_SendGoal_Response>()
{
  return olympic_interfaces::action::builder::Init_Rings_SendGoal_Response_accepted();
}

}  // namespace olympic_interfaces


namespace olympic_interfaces
{

namespace action
{

namespace builder
{

class Init_Rings_GetResult_Request_goal_id
{
public:
  Init_Rings_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::olympic_interfaces::action::Rings_GetResult_Request goal_id(::olympic_interfaces::action::Rings_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::olympic_interfaces::action::Rings_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::olympic_interfaces::action::Rings_GetResult_Request>()
{
  return olympic_interfaces::action::builder::Init_Rings_GetResult_Request_goal_id();
}

}  // namespace olympic_interfaces


namespace olympic_interfaces
{

namespace action
{

namespace builder
{

class Init_Rings_GetResult_Response_result
{
public:
  explicit Init_Rings_GetResult_Response_result(::olympic_interfaces::action::Rings_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::olympic_interfaces::action::Rings_GetResult_Response result(::olympic_interfaces::action::Rings_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::olympic_interfaces::action::Rings_GetResult_Response msg_;
};

class Init_Rings_GetResult_Response_status
{
public:
  Init_Rings_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rings_GetResult_Response_result status(::olympic_interfaces::action::Rings_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Rings_GetResult_Response_result(msg_);
  }

private:
  ::olympic_interfaces::action::Rings_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::olympic_interfaces::action::Rings_GetResult_Response>()
{
  return olympic_interfaces::action::builder::Init_Rings_GetResult_Response_status();
}

}  // namespace olympic_interfaces


namespace olympic_interfaces
{

namespace action
{

namespace builder
{

class Init_Rings_FeedbackMessage_feedback
{
public:
  explicit Init_Rings_FeedbackMessage_feedback(::olympic_interfaces::action::Rings_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::olympic_interfaces::action::Rings_FeedbackMessage feedback(::olympic_interfaces::action::Rings_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::olympic_interfaces::action::Rings_FeedbackMessage msg_;
};

class Init_Rings_FeedbackMessage_goal_id
{
public:
  Init_Rings_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rings_FeedbackMessage_feedback goal_id(::olympic_interfaces::action::Rings_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Rings_FeedbackMessage_feedback(msg_);
  }

private:
  ::olympic_interfaces::action::Rings_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::olympic_interfaces::action::Rings_FeedbackMessage>()
{
  return olympic_interfaces::action::builder::Init_Rings_FeedbackMessage_goal_id();
}

}  // namespace olympic_interfaces

#endif  // OLYMPIC_INTERFACES__ACTION__DETAIL__RINGS__BUILDER_HPP_
