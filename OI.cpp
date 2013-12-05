#include "OI.h"
#include "SmartDashboard/SmartDashboard.h"

#define TRIGGER 1

OI::OI() {
	leftStick = new SmartJoystick(1);
	rightStick = new SmartJoystick(2);
	
	leftSwitch = new JoystickButton(leftStick, TRIGGER);
	rightSwitch = new JoystickButton(rightStick, TRIGGER);
	
}
