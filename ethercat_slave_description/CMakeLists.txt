cmake_minimum_required(VERSION 3.8)
project(ethercat_slave_description)
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(ethercat_driver REQUIRED)
find_package(ethercat_interface REQUIRED)
find_package(ethercat_generic_cia402_drive REQUIRED)
find_package(ethercat_generic_slave REQUIRED)

install(
  DIRECTORY config
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
