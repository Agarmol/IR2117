#include <chrono>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "nav_msgs/msg/odometry.hpp"

double pos_x=0.0, pos_y=0.0, ori_x=0.0, ori_y=0.0, angle, ini_pos_x=0.0, ini_pos_y=0.0,ini_angle=0.0, distance; 
using namespace std::chrono_literals;

void topic_callback(const nav_msgs::msg::Odometry::SharedPtr msg){

     if (ini_pos_x == 0 && ini_pos_y == 0 && ini_angle == 0) {
    	ini_pos_x = msg->pose.pose.position.x;
    	ini_pos_y = msg->pose.pose.position.y;
    	ini_angle = std::atan2(msg->pose.pose.orientation.y, msg->pose.pose.orientation.x);
    }
     ori_x= msg ->pose.pose.orientation.x;   
     ori_y= msg ->pose.pose.orientation.y;
     angle = std::atan2(ori_y,ori_x);
     distance = std::sqrt(std::pow(pos_x - ini_pos_x, 2) + std::pow(pos_y - ini_pos_y, 2));
     pos_x = msg->pose.pose.position.x;
     pos_y = msg->pose.pose.position.y;
     std::cout << "Initial x: " << ini_pos_x << std::endl;
     std::cout << "Initial y: " << ini_pos_y << std::endl;

     std::cout << "X pos:" << pos_x << std::endl;
     std::cout << "Y pos:" << pos_y << std::endl;
     std::cout << "Angle(radians): " << angle << std::endl;
     std::cout << "Distance: " << distance << std::endl;
   
}
int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("square_odom");
  auto publisher = node->create_publisher<geometry_msgs::msg::Twist>("odom", 10);
  auto subscription = node->create_subscription<nav_msgs::msg::Odometry>("odom", 10, topic_callback);
  node->declare_parameter("linear_speed", 0.1);
  node->declare_parameter("angular_speed", 3.1416/20);
  node->declare_parameter("square_length", 1.0);
  
  geometry_msgs::msg::Twist message;
  rclcpp::WallRate loop_rate(10ms);
 double linear_speed = node->get_parameter("linear_speed").get_parameter_value().get<double>();
 double angular_speed = node->get_parameter("angular_speed").get_parameter_value().get<double>();
 double square_length = node->get_parameter("square_length").get_parameter_value().get<double>();
for(int j=0; j<4; j++){
   int i= 10, n= square_length / (0.01 * linear_speed); 
   while (rclcpp::ok() && (i<n)) {
     i++;
     message.linear.x = linear_speed;
     publisher->publish(message);
     rclcpp::spin_some(node);
     loop_rate.sleep();
   }
   
  
   message.linear.x = 0;
   publisher->publish(message);
  
   i=0;
   n=(3.1416/2) / (0.01 * angular_speed);
  
   while (rclcpp::ok() && (i<n)) {
     i++;
     message.angular.z = angular_speed;
     publisher->publish(message);
     rclcpp::spin_some(node);
     loop_rate.sleep();
}

  message.angular.z = 0;
  publisher->publish(message);
}  
  rclcpp::shutdown();
  return 0;
}

