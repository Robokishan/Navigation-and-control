// Generated by gencpp from file ros_learn_action/FibonacciAction.msg
// DO NOT EDIT!


#ifndef ROS_LEARN_ACTION_MESSAGE_FIBONACCIACTION_H
#define ROS_LEARN_ACTION_MESSAGE_FIBONACCIACTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <ros_learn_action/FibonacciActionGoal.h>
#include <ros_learn_action/FibonacciActionResult.h>
#include <ros_learn_action/FibonacciActionFeedback.h>

namespace ros_learn_action
{
template <class ContainerAllocator>
struct FibonacciAction_
{
  typedef FibonacciAction_<ContainerAllocator> Type;

  FibonacciAction_()
    : action_goal()
    , action_result()
    , action_feedback()  {
    }
  FibonacciAction_(const ContainerAllocator& _alloc)
    : action_goal(_alloc)
    , action_result(_alloc)
    , action_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::ros_learn_action::FibonacciActionGoal_<ContainerAllocator>  _action_goal_type;
  _action_goal_type action_goal;

   typedef  ::ros_learn_action::FibonacciActionResult_<ContainerAllocator>  _action_result_type;
  _action_result_type action_result;

   typedef  ::ros_learn_action::FibonacciActionFeedback_<ContainerAllocator>  _action_feedback_type;
  _action_feedback_type action_feedback;





  typedef boost::shared_ptr< ::ros_learn_action::FibonacciAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_learn_action::FibonacciAction_<ContainerAllocator> const> ConstPtr;

}; // struct FibonacciAction_

typedef ::ros_learn_action::FibonacciAction_<std::allocator<void> > FibonacciAction;

typedef boost::shared_ptr< ::ros_learn_action::FibonacciAction > FibonacciActionPtr;
typedef boost::shared_ptr< ::ros_learn_action::FibonacciAction const> FibonacciActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_learn_action::FibonacciAction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_learn_action::FibonacciAction_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_learn_action::FibonacciAction_<ContainerAllocator1> & lhs, const ::ros_learn_action::FibonacciAction_<ContainerAllocator2> & rhs)
{
  return lhs.action_goal == rhs.action_goal &&
    lhs.action_result == rhs.action_result &&
    lhs.action_feedback == rhs.action_feedback;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_learn_action::FibonacciAction_<ContainerAllocator1> & lhs, const ::ros_learn_action::FibonacciAction_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_learn_action

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ros_learn_action::FibonacciAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_learn_action::FibonacciAction_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_learn_action::FibonacciAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_learn_action::FibonacciAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_learn_action::FibonacciAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_learn_action::FibonacciAction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_learn_action::FibonacciAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f59df5767bf7634684781c92598b2406";
  }

  static const char* value(const ::ros_learn_action::FibonacciAction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf59df5767bf76346ULL;
  static const uint64_t static_value2 = 0x84781c92598b2406ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_learn_action::FibonacciAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_learn_action/FibonacciAction";
  }

  static const char* value(const ::ros_learn_action::FibonacciAction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_learn_action::FibonacciAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"FibonacciActionGoal action_goal\n"
"FibonacciActionResult action_result\n"
"FibonacciActionFeedback action_feedback\n"
"\n"
"================================================================================\n"
"MSG: ros_learn_action/FibonacciActionGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"FibonacciGoal goal\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: ros_learn_action/FibonacciGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#goal definition\n"
"int32 order\n"
"\n"
"================================================================================\n"
"MSG: ros_learn_action/FibonacciActionResult\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalStatus status\n"
"FibonacciResult result\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalStatus\n"
"GoalID goal_id\n"
"uint8 status\n"
"uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n"
"uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n"
"uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n"
"                            #   and has since completed its execution (Terminal State)\n"
"uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n"
"uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n"
"                            #    to some failure (Terminal State)\n"
"uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n"
"                            #    because the goal was unattainable or invalid (Terminal State)\n"
"uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n"
"                            #    and has not yet completed execution\n"
"uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n"
"                            #    but the action server has not yet confirmed that the goal is canceled\n"
"uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n"
"                            #    and was successfully cancelled (Terminal State)\n"
"uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n"
"                            #    sent over the wire by an action server\n"
"\n"
"#Allow for the user to associate a string with GoalStatus for debugging\n"
"string text\n"
"\n"
"\n"
"================================================================================\n"
"MSG: ros_learn_action/FibonacciResult\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#result definition\n"
"int32[] sequence\n"
"\n"
"================================================================================\n"
"MSG: ros_learn_action/FibonacciActionFeedback\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalStatus status\n"
"FibonacciFeedback feedback\n"
"\n"
"================================================================================\n"
"MSG: ros_learn_action/FibonacciFeedback\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#feedback\n"
"int32[] sequence\n"
;
  }

  static const char* value(const ::ros_learn_action::FibonacciAction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_learn_action::FibonacciAction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_goal);
      stream.next(m.action_result);
      stream.next(m.action_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FibonacciAction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_learn_action::FibonacciAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_learn_action::FibonacciAction_<ContainerAllocator>& v)
  {
    s << indent << "action_goal: ";
    s << std::endl;
    Printer< ::ros_learn_action::FibonacciActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
    s << std::endl;
    Printer< ::ros_learn_action::FibonacciActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
    s << std::endl;
    Printer< ::ros_learn_action::FibonacciActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_LEARN_ACTION_MESSAGE_FIBONACCIACTION_H