#include "OI.h"
#include "SmartDashboard/SmartDashboard.h"

#define TRIGGER 1

// joystick drive modes, change these later.


// switch modes with these
#define NORMAL 2
#define TURBO 3
#define CUBIC 4

#define GEARSWTICHBUTTON 7 // we use this on the left stick

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
	
	gearSwitchButton = new JoystickButton(leftStick, 7);
	gearSwitchButton->WhenPressed(new SwitchGear());
}
