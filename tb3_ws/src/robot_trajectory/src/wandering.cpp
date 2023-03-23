#include <chrono>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"

using namespace std::chrono_literals;
std::vector<float>vector;
void topic_callback( const sensor_msgs::msg::LaserScan::SharedPtr msg){
	vector = msg ->ranges;
	std::cout<<vector[0]<<std::endl;
	std::cout<<vector[90]<<std::endl;
	std::cout<<vector[180]<<std::endl;
	std::cout<<vector[270]<<std::endl;
	
}


int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("wandering");
  auto publisher = node->create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 10);
  auto subscription = node->create_subscription<sensor_msgs::msg::LaserScan>("scan", 10, 	  topic_callback);
  node->declare_parameter("linear_speed", 0.0);
  geometry_msgs::msg::Twist message;
  rclcpp::WallRate loop_rate(10ms);

  while (rclcpp::ok()) {
 	message.linear.x = 0.0;
 	publisher->publish(message);
     	rclcpp::spin_some(node);
     	loop_rate.sleep();
  }
  rclcpp::shutdown();
  return 0;
}
