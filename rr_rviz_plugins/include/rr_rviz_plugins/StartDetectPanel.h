#ifndef PROJECT_StartDetectPANEL_H
#define PROJECT_StartDetectPANEL_H

#include <ros/ros.h>
#include <rviz/panel.h>
#include <rr_platform/speed.h>
#include <QLabel>
#include <std_msgs/Bool.h>

/*
 * All of our panels need to be under the rr_rviz_plugins namespace.
 */
namespace rr_rviz_plugins {

/*
 * Each panel is a subclass of rviz::Panel
 */
class StartDetectPanel : public rviz::Panel {
/*
 * rviz is based on QT, so our panels need to be QObjects, which requires this macro keyword.
 */
Q_OBJECT
public:

    /**
     * This is a standard QWidget constructor.
     * @param parent The parent widget, which will be responsible for the lifetime of this widget.
     */
    StartDetectPanel(QWidget *parent = 0);

protected:
    /*
     * Be sure to make any publishers / subscribers members of the class. This will keep them alive throughout
     * the lifetime of the widget.
     */
    // ros::Subscriber startDetect_subscriber;
    ros::Subscriber startDetect_subscriber;

    /**
     * Declare any ROS callbacks you need here. Be sure to create a parameter for any UI elements you need to update.
     * @param msg The ROS message that triggers this callback.
     * @param label A QT label whose text we will update based on the message contents.
     */
    void start_callback(const std_msgs::BoolConstPtr &msg, QLabel *label);

};

}

#endif //PROJECT_StartDetectPANEL_H
