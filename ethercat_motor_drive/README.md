# ethercat_motor_drive

This repository contains the instructions for running an EtherCAT compatible motor drive and use it in ROS2 with [EtherCAT Driver ROS2 stack](https://github.com/ICube-Robotics/ethercat_driver_ros2).

## Required Hardware ##
- Maxon EPOS3 motor drive
- Compatible DC motor with encoder

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
    colcon build --cmake-args -DCMAKE_BUILD_TYPE=Release --symlink-install --packages-select ethercat_motor_drive
    source install/setup.bash
    ```
5. Run the system:
    ```shell
    ros2 launch ethercat_motor_drive motor_drive.launch.py
    ```

## Contacts ##
![icube](https://icube.unistra.fr/fileadmin/templates/DUN/icube/images/logo.png)

[ICube Laboratory](https://icube.unistra.fr), [University of Strasbourg](https://www.unistra.fr/), France

__Maciej Bednarczyk:__ [m.bednarczyk@unistra.fr](mailto:m.bednarczyk@unistra.fr), @github: [mcbed](https://github.com/mcbed)
