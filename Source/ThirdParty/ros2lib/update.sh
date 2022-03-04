#!/bin/bash
ROS_INSTALL_DIR=${1:-"/home/tad/ROS2/FOXY/install"}
for L in $(ls -d -- */)
do
#    echo $L
    rm -rf $L
    cp -r ${ROS_INSTALL_DIR}/$L .
    rm -r $L/share
done
