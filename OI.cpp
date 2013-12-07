#include "OI.h"
#include "SmartDashboard/SmartDashboard.h"

#define TRIGGER 1

// joystick drive modes, change these later.

#define NORMAL 2
#define TURBO 3
#define CUBIC 4

OI::OI() {
	leftStick = new SmartJoystick(1);
	rightStick = new SmartJoystick(2);
	
	// store our pointers in WPILibExtensions
	ChangeJoystickModeCommand::AddSmartJoystickPointers(2, leftStick, rightStick);
	 	
	normalMode = new JoystickButton(leftStick, NORMAL);
	normalMode->WhenPressed(new ChangeJoystickModeCommand(SmartJoystick::normal));
	
	turboMode = new JoystickButton(leftStick, TURBO);
	turboMode->WhenPressed(new ChangeJoystickModeCommand(SmartJoystick::extreme));
	
	cubicMode = new JoystickButton(leftStick, CUBIC);
	cubicMode->WhenPressed(new ChangeJoystickModeCommand(SmartJoystick::cubic));
	
	lowGear = new JoystickButton(leftStick, TRIGGER);
	lowGear->WhenPressed(new SwitchGear(true));
	
	highGear = new JoystickButton(rightStick, TRIGGER);
	highGear->WhenPressed(new SwitchGear(false));
}
