// Generated by gencpp from file driver_base/SensorLevels.msg
// DO NOT EDIT!


#ifndef DRIVER_BASE_MESSAGE_SENSORLEVELS_H
#define DRIVER_BASE_MESSAGE_SENSORLEVELS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace driver_base
{
template <class ContainerAllocator>
struct SensorLevels_
{
  typedef SensorLevels_<ContainerAllocator> Type;

  SensorLevels_()
    {
    }
  SensorLevels_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }





  enum {
    RECONFIGURE_CLOSE = 3,
    RECONFIGURE_STOP = 1,
    RECONFIGURE_RUNNING = 0,
  };


  typedef boost::shared_ptr< ::driver_base::SensorLevels_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::driver_base::SensorLevels_<ContainerAllocator> const> ConstPtr;

}; // struct SensorLevels_

typedef ::driver_base::SensorLevels_<std::allocator<void> > SensorLevels;

typedef boost::shared_ptr< ::driver_base::SensorLevels > SensorLevelsPtr;
typedef boost::shared_ptr< ::driver_base::SensorLevels const> SensorLevelsConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::driver_base::SensorLevels_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::driver_base::SensorLevels_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace driver_base

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'driver_base': ['/home/heinrich/catkin_ws/src/hokuyo/driver_common/driver_base/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::driver_base::SensorLevels_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::driver_base::SensorLevels_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::driver_base::SensorLevels_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::driver_base::SensorLevels_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::driver_base::SensorLevels_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::driver_base::SensorLevels_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::driver_base::SensorLevels_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6322637bee96d5489db6e2127c47602c";
  }

  static const char* value(const ::driver_base::SensorLevels_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6322637bee96d548ULL;
  static const uint64_t static_value2 = 0x9db6e2127c47602cULL;
};

template<class ContainerAllocator>
struct DataType< ::driver_base::SensorLevels_<ContainerAllocator> >
{
  static const char* value()
  {
    return "driver_base/SensorLevels";
  }

  static const char* value(const ::driver_base::SensorLevels_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::driver_base::SensorLevels_<ContainerAllocator> >
{
  static const char* value()
  {
    return "byte RECONFIGURE_CLOSE = 3  # Parameters that need a sensor to be stopped completely when changed\n\
byte RECONFIGURE_STOP = 1  # Parameters that need a sensor to stop streaming when changed\n\
byte RECONFIGURE_RUNNING = 0 # Parameters that can be changed while a sensor is streaming\n\
";
  }

  static const char* value(const ::driver_base::SensorLevels_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::driver_base::SensorLevels_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SensorLevels_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::driver_base::SensorLevels_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::driver_base::SensorLevels_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // DRIVER_BASE_MESSAGE_SENSORLEVELS_H
