#ifndef GEAR_SWITCHER_H
#define GEAR_SWITCHER_H
#include "WPILib.h"
#include "Commands/Subsystem.h"
class GearSwitcher : public Subsystem {
public:
	GearSwitcher();
	void SwitchLow(); 
	void SwitchOff();
	void SwitchHigh();
private:
	DoubleSolenoid* solenoid;
};

#endif
