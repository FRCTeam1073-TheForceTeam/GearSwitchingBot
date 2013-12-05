#ifndef JOYSTICK_DRIVE_H
#define JOYSTICK_DRIVE_H
#include "Commands/Subsystem.h"
#include "../WPILibExtensions/WPILibExtensions.h"
#include "../RobotMap.h"
#include "../Robot.h"
class JoystickDrive : public Command {
public:
	JoystickDrive();
	void Initialize() {}
	void Execute();
	bool IsFinished();
	void End() {}
	void Interrupted() {} //don't worry about theseb
};

#endif
