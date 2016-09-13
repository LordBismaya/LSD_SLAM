/** Author: Bismaya Sahoo
 *  Email: bsahoo@uwaterloo.ca
 * */


#pragma once
#include <ros/ros.h>
#include <ros/package.h>
#include <assert.h>
#include <math.h>
#include <iostream>
#include <boost/format.hpp>

#include "microstrain_3dmgx2_imu/3dmgx2.h"

#include "ros/time.h"
//#include "self_test/self_test.h"
//#include "diagnostic_msgs/DiagnosticStatus.h"
//#include "diagnostic_updater/diagnostic_updater.h"
//#include "diagnostic_updater/update_functions.h"
//#include "diagnostic_updater/DiagnosticStatusWrapper.h"

#include "sensor_msgs/Imu.h"
#include "std_srvs/Empty.h"

#include "tf/transform_datatypes.h"
//#include "microstrain_3dmgx2_imu/AddOffset.h"

#include "std_msgs/Bool.h"

namespace lsd_slam
{
	class ROSImuThread
	{
		public:
		ROSIMUThread();
		~ROSIMUThread();
		
		private:
		
