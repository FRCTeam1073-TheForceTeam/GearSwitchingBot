#include "GearSwitcher.h"
#include "../RobotMap.h"

#define high DoubleSolenoid::kForward
#define off DoubleSolenoid::kOff
#define low DoubleSolenoid::kReverse

GearSwitcher::GearSwitcher() : Subsystem("GearSwitcher") {
	solenoid = RobotMap::doubleSolenoid;
	lowGear = true;
}

void GearSwitcher::Switch() {
	if (lowGear)
		solenoid->Set(low);
	else
		solenoid->Set(high);
	lowGear = !lowGear;
}

bool GearSwitcher::IsLowGear() {
	return lowGear;
}
