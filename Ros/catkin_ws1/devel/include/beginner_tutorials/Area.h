// Generated by gencpp from file beginner_tutorials/Area.msg
// DO NOT EDIT!


#ifndef BEGINNER_TUTORIALS_MESSAGE_AREA_H
#define BEGINNER_TUTORIALS_MESSAGE_AREA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace beginner_tutorials
{
template <class ContainerAllocator>
struct Area_
{
  typedef Area_<ContainerAllocator> Type;

  Area_()
    : triangleArea(0.0)
    , squareAresa(0.0)  {
    }
  Area_(const ContainerAllocator& _alloc)
    : triangleArea(0.0)
    , squareAresa(0.0)  {
  (void)_alloc;
    }



   typedef double _triangleArea_type;
  _triangleArea_type triangleArea;

   typedef double _squareAresa_type;
  _squareAresa_type squareAresa;





  typedef boost::shared_ptr< ::beginner_tutorials::Area_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::beginner_tutorials::Area_<ContainerAllocator> const> ConstPtr;

}; // struct Area_

typedef ::beginner_tutorials::Area_<std::allocator<void> > Area;

typedef boost::shared_ptr< ::beginner_tutorials::Area > AreaPtr;
typedef boost::shared_ptr< ::beginner_tutorials::Area const> AreaConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::beginner_tutorials::Area_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::beginner_tutorials::Area_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::beginner_tutorials::Area_<ContainerAllocator1> & lhs, const ::beginner_tutorials::Area_<ContainerAllocator2> & rhs)
{
  return lhs.triangleArea == rhs.triangleArea &&
    lhs.squareAresa == rhs.squareAresa;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::beginner_tutorials::Area_<ContainerAllocator1> & lhs, const ::beginner_tutorials::Area_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace beginner_tutorials

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::beginner_tutorials::Area_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::beginner_tutorials::Area_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::beginner_tutorials::Area_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::beginner_tutorials::Area_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::beginner_tutorials::Area_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::beginner_tutorials::Area_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::beginner_tutorials::Area_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5648e7ac35be221a65813918d3e85b48";
  }

  static const char* value(const ::beginner_tutorials::Area_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5648e7ac35be221aULL;
  static const uint64_t static_value2 = 0x65813918d3e85b48ULL;
};

template<class ContainerAllocator>
struct DataType< ::beginner_tutorials::Area_<ContainerAllocator> >
{
  static const char* value()
  {
    return "beginner_tutorials/Area";
  }

  static const char* value(const ::beginner_tutorials::Area_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::beginner_tutorials::Area_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 triangleArea\n"
"float64 squareAresa\n"
;
  }

  static const char* value(const ::beginner_tutorials::Area_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::beginner_tutorials::Area_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.triangleArea);
      stream.next(m.squareAresa);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Area_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::beginner_tutorials::Area_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::beginner_tutorials::Area_<ContainerAllocator>& v)
  {
    s << indent << "triangleArea: ";
    Printer<double>::stream(s, indent + "  ", v.triangleArea);
    s << indent << "squareAresa: ";
    Printer<double>::stream(s, indent + "  ", v.squareAresa);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BEGINNER_TUTORIALS_MESSAGE_AREA_H
