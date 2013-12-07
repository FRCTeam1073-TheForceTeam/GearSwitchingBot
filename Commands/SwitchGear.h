#ifndef SWITCH_GEAR_H
#define SWITCH_GEAR_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "../RobotMap.h"
class SwitchGear : public Command {
public:
	SwitchGear(bool low);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	bool low;
};
#endif
