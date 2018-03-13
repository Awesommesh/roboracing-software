#ifndef RR_COMMON_FOLLOWER_H
#define RR_COMMON_FOLLOWER_H

#include <ros/ros.h>
#include <pcl/point_cloud.h>
#include <pcl/PCLPointCloud2.h>
#include <pcl_conversions/pcl_conversions.h>
#include <pcl/filters/passthrough.h>
#include <string>
#include <rr_platform/speed.h>
#include <rr_platform/steering.h>
#include "flann/flann.hpp"

float MAX_Y;
float GOAL_Y;
float MIN_X;
float MAX_X;
float MAX_Z;
float GROUND_THRESHOLD;
float FOLLOWER_SPEED;

ros::Publisher speed_pub, steer_pub;


#endif //RR_COMMON_FOLLOWER_H
