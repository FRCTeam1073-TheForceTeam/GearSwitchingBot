#include "DriveTrain.h"
#include "../Commands/JoystickDrive.h"
DriveTrain::DriveTrain() : Subsystem("DriveTrain"){}

void DriveTrain::FeedMotors(float x, float y) {
	RobotMap::leftDrive->Set(x);
	RobotMap::rightDrive->Set(y);
}

void DriveTrain::InitDefaultCommand(){
	SetDefaultCommand(new JoystickDrive());
}
