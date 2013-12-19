#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
SmartCANJaguarSeries* RobotMap::leftDrive = NULL;
SmartCANJaguarSeries* RobotMap::rightDrive = NULL;
DoubleSolenoid* RobotMap::doubleSolenoid = NULL;
GearSwitcher* RobotMap::gearSwitcher = NULL;
DriveTrain* RobotMap::driveTrain = NULL;

void RobotMap::init() {
	SmartCANJaguar* leftFront = new SmartCANJaguar(DRIVE_JAG_LEFT_FRONT);
	SmartCANJaguar* leftRear = new SmartCANJaguar(DRIVE_JAG_LEFT_REAR);
	SmartCANJaguar* rightFront = new SmartCANJaguar(DRIVE_JAG_RIGHT_FRONT);
	SmartCANJaguar* rightRear = new SmartCANJaguar(DRIVE_JAG_RIGHT_REAR);
	
	rightFront->Invert();
	rightRear->Invert();
	
	leftDrive = new SmartCANJaguarSeries();
	leftDrive->Add(2, leftFront, leftRear);
	
	rightDrive= new SmartCANJaguarSeries();
	rightDrive->Add(2, rightFront, rightRear);
	
	doubleSolenoid = new DoubleSolenoid(SOLENOID_PORT_ONE, SOLENOID_PORT_TWO);
	
	// construct Subsystems...
	driveTrain = new DriveTrain();
	gearSwitcher = new GearSwitcher();
	
	
}
