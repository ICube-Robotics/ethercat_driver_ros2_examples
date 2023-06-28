cmake_minimum_required(VERSION 3.8)
project(ethercat_slave_description)
find_package(ament_cmake REQUIRED)

install(
  DIRECTORY config
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
