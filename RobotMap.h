#ifndef ROBOTMAP_H
#define ROBOTMAP_H
#include "WPILibExtensions/WPILibExtensions.h"
#include "WPILib.h"
#include "HardwareIncludes.h"
#include "Subsystems/DriveTrain.h"
#include "Subsystems/GearSwitcher.h"
class RobotMap {
public:
	static void init();
	static SmartCANJaguarSeries* leftDrive;
	static SmartCANJaguarSeries* rightDrive;
	
	static DoubleSolenoid* doubleSolenoid;
	
	static DriveTrain* driveTrain;
	static GearSwitcher* gearSwitcher;
};
#endif
