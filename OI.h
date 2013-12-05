#ifndef OI_H
#define OI_H
#include "WPILib.h"
#include "WPILibExtensions/WPILibExtensions.h"
class OI {
private:
public:
	OI();
	
	SmartJoystick* leftStick;
	SmartJoystick* rightStick;


private:

	JoystickButton* leftSwitch;
	JoystickButton* rightSwitch;

	
	
};
#endif
