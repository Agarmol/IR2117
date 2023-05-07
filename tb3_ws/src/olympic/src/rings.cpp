#include <chrono>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include <cmath>
#include <memory>
#include <cstdlib>
#include "turtlesim/srv/set_pen.hpp"
#include "turtlesim/srv/teleport_absolute.hpp"


using namespace std::chrono_literals;
using turtlesim::srv::SetPen;
using turtlesim::srv::TeleportAbsolute;

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

 RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to set pen.");

 //set_pen client
  auto client = node->create_client<SetPen>("/turtle1/set_pen");
  
  auto request = std::make_shared<SetPen::Request>();
  // yellow
  request->red = 255; 
  request->green = 255; 
  request->blue = 0; 
  request->width = 0; 
  request->off = 0;
  
  std::vector<int> red = {255, 0, 255, 255, 0};
  std::vector<int> green = {255, 0, 0, 255, 255};
  std::vector<int> blue = {255, 255, 0, 0, 0}; 

  while (!client->wait_for_service(1s)) {
    if (!rclcpp::ok()) {
      RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service.");
      return 0;
    }
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again...");
  }

  auto result = client->async_send_request(request);
  // Wait for the result
  if (rclcpp::spin_until_future_complete(node,result) == rclcpp::FutureReturnCode::SUCCESS)
  {
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Todo bien");
  } else  {
    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service SetPen");
  }
  
  // teleport
  auto client_tp = node->create_client<TeleportAbsolute>("/turtle1/teleport_absolute");
  
  auto request_tp = std::make_shared<TeleportAbsolute::Request>();
  // tp middle
  request_tp->x = 2.5; 
  request_tp->y = 2.5; 


  std::vector<float> x = {5.5, 3.0, 8.0, 4.25, 6.75};
  std::vector<float> y = {5.5, 5.5, 5.5, 3.25, 3.25};   

  while (!client_tp->wait_for_service(1s)) {
    if (!rclcpp::ok()) {
      RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service.");
      return 0;
    }
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again...");
  }

  auto result_tp = client_tp->async_send_request(request_tp);
  // Wait for the result
  if (rclcpp::spin_until_future_complete(node,result_tp) == rclcpp::FutureReturnCode::SUCCESS)
  {
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Todo bien");
  } else  {
    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service SetPen");
  }
  
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

