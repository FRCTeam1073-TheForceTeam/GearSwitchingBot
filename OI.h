#ifndef OI_H
#define OI_H
#include "WPILib.h"
#include "WPILibExtensions/WPILibExtensions.h"
#include "Commands/SwitchGear.h"

class OI {
private:
public:
	OI();
	
	SmartJoystick* leftStick;
	SmartJoystick* rightStick;


private:
	JoystickButton* normalMode;
	JoystickButton* turboMode;
	JoystickButton* cubicMode;
	JoystickButton* gearSwitchButton;
	
};
#endif
