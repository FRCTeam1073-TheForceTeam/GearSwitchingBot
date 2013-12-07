#include "GearSwitcher.h"
#include "../RobotMap.h"

#define high DoubleSolenoid::kForward
#define off DoubleSolenoid::kOff
#define low DoubleSolenoid::kReverse

GearSwitcher::GearSwitcher() : Subsystem("GearSwitcher") {
	solenoid = RobotMap::doubleSolenoid;
	lowGear = true;
}

void GearSwitcher::SwitchLow() {
	solenoid->Set(low);
}

// would we ever use this?s
void GearSwitcher::SwitchOff() {
	if(lowGear) {
		puts("you're already in the low gear!");
		return;
	}
	lowGear = true;
	Set();
}

void GearSwitcher::SwitchHigh() {
	if (!lowGear) {
		puts("you're already in the high gear!");
		return;
	}
	lowGear = false;
	Set();
}
 
void GearSwitcher::Set() {
	if(lowGear) 
		solenoid->Set(low);
	else solenoid->Set(high);
}

bool GearSwitcher::IsLowGear() {
	return lowGear;
}
