#include "SwitchGear.h"
SwitchGear::SwitchGear(bool low) {
	Requires(RobotMap::gearSwitcher);
	this->low = low;
}

void SwitchGear::Initialize() {
	printf("Switching to... ");
	if (low) {
		RobotMap::gearSwitcher->SwitchLow(); 
		puts("low gear");
	}
	else {
		RobotMap::gearSwitcher->SwitchHigh();
		puts("high gear");
	}
}

void SwitchGear::Execute() {}

bool SwitchGear::IsFinished() {
	return true; //do we just pop open the valve and let hardware do the rest
}

void SwitchGear::End() {}

void SwitchGear::Interrupted() {
	End();
}
