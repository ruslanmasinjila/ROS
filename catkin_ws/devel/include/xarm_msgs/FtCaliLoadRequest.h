// Generated by gencpp from file xarm_msgs/FtCaliLoadRequest.msg
// DO NOT EDIT!


#ifndef XARM_MSGS_MESSAGE_FTCALILOADREQUEST_H
#define XARM_MSGS_MESSAGE_FTCALILOADREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace xarm_msgs
{
template <class ContainerAllocator>
struct FtCaliLoadRequest_
{
  typedef FtCaliLoadRequest_<ContainerAllocator> Type;

  FtCaliLoadRequest_()
    : datas()
    , association_setting_tcp_load(false)  {
    }
  FtCaliLoadRequest_(const ContainerAllocator& _alloc)
    : datas(_alloc)
    , association_setting_tcp_load(false)  {
  (void)_alloc;
    }



   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _datas_type;
  _datas_type datas;

   typedef uint8_t _association_setting_tcp_load_type;
  _association_setting_tcp_load_type association_setting_tcp_load;





  typedef boost::shared_ptr< ::xarm_msgs::FtCaliLoadRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::xarm_msgs::FtCaliLoadRequest_<ContainerAllocator> const> ConstPtr;

}; // struct FtCaliLoadRequest_

typedef ::xarm_msgs::FtCaliLoadRequest_<std::allocator<void> > FtCaliLoadRequest;

typedef boost::shared_ptr< ::xarm_msgs::FtCaliLoadRequest > FtCaliLoadRequestPtr;
typedef boost::shared_ptr< ::xarm_msgs::FtCaliLoadRequest const> FtCaliLoadRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::xarm_msgs::FtCaliLoadRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::xarm_msgs::FtCaliLoadRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::xarm_msgs::FtCaliLoadRequest_<ContainerAllocator1> & lhs, const ::xarm_msgs::FtCaliLoadRequest_<ContainerAllocator2> & rhs)
{
  return lhs.datas == rhs.datas &&
    lhs.association_setting_tcp_load == rhs.association_setting_tcp_load;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::xarm_msgs::FtCaliLoadRequest_<ContainerAllocator1> & lhs, const ::xarm_msgs::FtCaliLoadRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace xarm_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::xarm_msgs::FtCaliLoadRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::xarm_msgs::FtCaliLoadRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::xarm_msgs::FtCaliLoadRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::xarm_msgs::FtCaliLoadRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xarm_msgs::FtCaliLoadRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xarm_msgs::FtCaliLoadRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::xarm_msgs::FtCaliLoadRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e1a744721d8bd85af94cc035f3af6940";
  }

  static const char* value(const ::xarm_msgs::FtCaliLoadRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe1a744721d8bd85aULL;
  static const uint64_t static_value2 = 0xf94cc035f3af6940ULL;
};

template<class ContainerAllocator>
struct DataType< ::xarm_msgs::FtCaliLoadRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "xarm_msgs/FtCaliLoadRequest";
  }

  static const char* value(const ::xarm_msgs::FtCaliLoadRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::xarm_msgs::FtCaliLoadRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This format is suitable for the following services\n"
"#   - ft_sensor_cali_load\n"
"\n"
"# iden result([mass(kg)，x_centroid(mm)，y_centroid(mm)，z_centroid(mm)，Fx_offset，Fy_offset，Fz_offset，Tx_offset，Ty_offset，Tz_ffset])\n"
"float32[] datas\n"
"\n"
"# whether to convert the paramster to the corresponding tcp load and set\n"
"bool association_setting_tcp_load\n"
"# float32 m   0.325\n"
"# float32 x   -17.0\n"
"# float32 y   9.0\n"
"# float32 z   11.8\n"
"\n"
;
  }

  static const char* value(const ::xarm_msgs::FtCaliLoadRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::xarm_msgs::FtCaliLoadRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.datas);
      stream.next(m.association_setting_tcp_load);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FtCaliLoadRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::xarm_msgs::FtCaliLoadRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::xarm_msgs::FtCaliLoadRequest_<ContainerAllocator>& v)
  {
    s << indent << "datas[]" << std::endl;
    for (size_t i = 0; i < v.datas.size(); ++i)
    {
      s << indent << "  datas[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.datas[i]);
    }
    s << indent << "association_setting_tcp_load: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.association_setting_tcp_load);
  }
};

} // namespace message_operations
} // namespace ros

#endif // XARM_MSGS_MESSAGE_FTCALILOADREQUEST_H
