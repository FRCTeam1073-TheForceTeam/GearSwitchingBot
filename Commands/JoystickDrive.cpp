#include "JoystickDrive.h"

JoystickDrive::JoystickDrive() {
	Requires(RobotMap::driveTrain);
}

void JoystickDrive::Execute() {
	RobotMap::driveTrain->FeedMotors(Robot::oi->leftStick->GetY(), Robot::oi->rightStick->GetY());
}

bool JoystickDrive::IsFinished() {
	return false;
}
