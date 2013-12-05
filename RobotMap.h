#ifndef ROBOTMAP_H
#define ROBOTMAP_H
#include "WPILibExtensions/WPILibExtensions.h"
#include "WPILib.h"
#include "HardwareIncludes.h"
class RobotMap {
public:
	static void init();
	static SmartCANJaguarSeries* leftDrive;
	static SmartCANJaguarSeries* rightDrive;
};
#endif
