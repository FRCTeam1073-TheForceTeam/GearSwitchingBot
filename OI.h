#ifndef OI_H
#define OI_H
#include "WPILib.h"
#include "WPILibExtensions/WPILibExtensions.h"
#include <vector>

class OI {
private:
public:
	OI();
	
	SmartJoystick* leftStick;
	SmartJoystick* rightStick;


private:

	JoystickButton* leftSwitch;
	JoystickButton* rightSwitch;
	JoystickButton* normalMode;
	JoystickButton* turboMode;
	JoystickButton* cubicMode;
	vector<SmartJoystick*>* joyListPtr;
	
	
};
#endif
