#include "SwitchGear.h"
SwitchGear::SwitchGear() {
	for (int i = 0; i < 20; i++) puts ("contructed switch gear");
	Requires(RobotMap::gearSwitcher);
}

void SwitchGear::Initialize() {
	for (int i = 0; i < 34; i++) puts("init switch gear");	
	RobotMap::gearSwitcher->Switch();
	if (RobotMap::gearSwitcher->IsLowGear())
		puts("You're now in low gear!");
	else 
		puts("You're now in high gear");
}

void SwitchGear::Execute() {}

bool SwitchGear::IsFinished() {
	return true; //do we just pop open the valve and let hardware do the rest
}

void SwitchGear::End() {}

void SwitchGear::Interrupted() {
	End();
}
