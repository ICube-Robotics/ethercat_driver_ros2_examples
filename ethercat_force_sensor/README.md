# ethercat_force_sensor

This repository contains the instructions for building a custom Force Sensor EtherCAT slave using strain gauges and EasyCAT and use it in ROS2 with [EtherCAT Driver ROS2 stack](https://github.com/ICube-Robotics/ethercat_driver_ros2).

## Required Hardware ##
| | |
|---|---
| [Arduino Uno](https://store.arduino.cc/products/arduino-uno-rev3) | <img src="https://cdn.shopify.com/s/files/1/0438/4735/2471/products/A000066_01.iso_643x483.jpg?v=1629815860"  width="30%">
| [Load Cell / Wheatstone Amplifier Shield (2ch)](https://eu.robotshop.com/products/strain-gauge-load-cell-amplifier-shield-2ch) |<img src="https://cdn.shopify.com/s/files/1/0573/1486/9416/products/strain-gauge-load-cell-amplifier-shield-2ch_53cd0820-70a7-4f4f-95c8-a95b3a1deff1_600x.jpg?v=1681189038"  width="30%"> |
| [EasyCAT Shield for Arduino](https://www.bausano.net/en/hardware/easycat.html)  | <img src="https://www.bausano.net/images/EasyCAT.jpg" width="30%">
| [5 Kg Micro Load Cell](https://eu.robotshop.com/products/micro-load-cell-5-kg)  | <img src="https://cdn.shopify.com/s/files/1/0573/1486/9416/products/micro-load-cell-5-kg_1_0e957087-2532-406e-90a7-35aeebde0a6a_600x.jpg?v=1680837537" width="30%">



## EasyCAT configuration ##
Use the [EasyConfigurator](https://www.bausano.net/images/arduino-easycat/EasyConfigurator_UserManual.pdf) tool to load the [ForceSensor](config/easycat_config/ForceSensor.prj) file and write the configuration to the slave EEPROM.

Open the [ForceSensor](config/easycat_config/ForceSensor.ino) Arduino project in the [Arduino IDE](https://www.arduino.cc/en/software) and upload it to the Arduino board.

## Usage ##
***Required setup : Ubuntu 22.04 LTS***

1.  Install `ros2` packages. The current development is based of `ros2 humble`. Installation steps are described [here](https://docs.ros.org/en/humble/Installation.html).
2. Source your `ros2` environment:
    ```shell
    source /opt/ros/humble/setup.bash
    ```
    **NOTE**: The ros2 environment needs to be sources in every used terminal. If only one distribution of ros2 is used, it can be added to the `~/.bashrc` file.
3. Install `colcon` and its extensions :
    ```shell
    sudo apt install python3-colcon-common-extensions
     ```
3. Create a new ros2 workspace:
    ```shell
    mkdir ~/ros2_ws/src
    ```
4. Pull relevant packages, install dependencies, compile, and source the workspace by using:
    ```shell
    cd ~/ros2_ws
    git clone https://github.com/ICube-Robotics/ethercat_driver_ros2_examples.git src/ethercat_driver_ros2_examples
    vcs import src < ethercat_driver_ros2_examples.repos
    rosdep install --ignore-src --from-paths . -y -r
    colcon build --cmake-args -DCMAKE_BUILD_TYPE=Release --symlink-install --packages-select ethercat_force_sensor
    source install/setup.bash
    ```
5. Run the system:
    ```shell
    ros2 launch ethercat_force_sensor force_sensor.launch.py
    ```

## Contacts ##
![icube](https://icube.unistra.fr/fileadmin/templates/DUN/icube/images/logo.png)

[ICube Laboratory](https://icube.unistra.fr), [University of Strasbourg](https://www.unistra.fr/), France

__Maciej Bednarczyk:__ [m.bednarczyk@unistra.fr](mailto:m.bednarczyk@unistra.fr), @github: [mcbed](https://github.com/mcbed)
