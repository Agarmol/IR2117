#include <chrono>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include <cmath>

using namespace std::chrono_literals;

int main(int argc, char * argv[])
{
 rclcpp::init(argc, argv);
 auto node = rclcpp::Node::make_shared("rings");
 auto publisher = node->create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel", 10);

 node->declare_parameter("radius_length", 1.0);
 geometry_msgs::msg::Twist message;
 auto publish_count = 0;
 rclcpp::WallRate loop_rate(500ms);
 
double radius_length = node->get_parameter("radius_length").get_parameter_value().get<double>();

double circle= 2* M_PI;

int iterations = static_cast<int>(circle/0.500);

 for (int i = 0; i < iterations; i++) {
   message.linear.x = 1;
   message.angular.z = 2*M_PI / circle;
   publisher->publish(message);
   rclcpp::spin_some(node);
   loop_rate.sleep();
 }
  message.linear.x = 0;
  message.angular.z = 0;
  publisher->publish(message);
   
 rclcpp::shutdown();
 return 0;
}

