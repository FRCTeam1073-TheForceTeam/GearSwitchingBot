#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
SmartCANJaguarSeries* RobotMap::leftDrive = NULL;
SmartCANJaguarSeries* RobotMap::rightDrive = NULL;

DriveTrain* RobotMap::driveTrain = NULL;

void RobotMap::init() {
	SmartCANJaguar* leftFront = new SmartCANJaguar(DRIVE_JAG_LEFT_FRONT);
	SmartCANJaguar* leftRear = new SmartCANJaguar(DRIVE_JAG_LEFT_REAR);
	SmartCANJaguar* rightFront = new SmartCANJaguar(DRIVE_JAG_RIGHT_FRONT);
	SmartCANJaguar* rightRear = new SmartCANJaguar(DRIVE_JAG_RIGHT_REAR);
	
	leftDrive = new SmartCANJaguarSeries();
	leftDrive->Add(leftFront);
	leftDrive->Add(leftRear);
	
	rightDrive= new SmartCANJaguarSeries();
	rightDrive->Add(rightFront);
	rightDrive->Add(rightRear);
	
	driveTrain = new DriveTrain();
	
}
