#include "SwitchGear.h"
SwitchGear::SwitchGear(bool low) {
	Requires(RobotMap::gearSwitcher);
	this->low = low;
}

void SwitchGear::Initialize() {
	if (low)
		RobotMap::gearSwitcher->SwitchLow();
	else 
		RobotMap::gearSwitcher->SwitchHigh();
}

void SwitchGear::Execute() {}

bool SwitchGear::IsFinished() {
	return true; //do we just pop open the valve and let hardware do the rest
}

void SwitchGear::End() {}

void SwitchGear::Interrupted() {
	End();
}
