#ifndef _ROBOT_H
#define _ROBOT_H
#include "WPILib.h"
#include "Commands/Command.h"
#include "OI.h"
#include "RobotMap.h"
#include "WPILibExtensions/WPILibExtensions.h"
class Robot : public IterativeRobot {
public:
	Robot();
	LiveWindow *lw;
	virtual void RobotInit();
	virtual void AutonomousInit();
	virtual void AutonomousPeriodic();
	virtual void TeleopInit();
	virtual void TeleopPeriodic();
	virtual void TestPerbpiodic();
	virtual void DisabledInit();
	virtual void TestPeriodic();
	static OI* oi;
	
private:
	
};
#endif
