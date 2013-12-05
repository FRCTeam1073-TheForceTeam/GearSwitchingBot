#include "OI.h"
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
OI::OI() {
	SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());
}
