#include "GearSwitcher.h"
#include "../RobotMap.h"

#define high DoubleSolenoid::kForward
#define off DoubleSolenoid::kOff
#define low DoubleSolenoid::kReverse

GearSwitcher::GearSwitcher() : Subsystem("GearSwitcher") {
	solenoid = RobotMap::doubleSolenoid;
}

void GearSwitcher::SwitchLow() {
	solenoid->Set(low);
}

void GearSwitcher::SwitchOff() {
	solenoid->Set(off);
}

void GearSwitcher::SwitchHigh() {
	solenoid->Set(high);
}
 
