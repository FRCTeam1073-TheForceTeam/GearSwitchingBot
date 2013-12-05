
#include "Robot.h"
OI* Robot::oi = 0;
void Robot::RobotInit() {
	RobotMap::init();
	oi = new OI();
	lw = LiveWindow::GetInstance();
  }
	
void Robot::AutonomousInit() {
}
	
void Robot::AutonomousPeriodic() {
	Scheduler::GetInstance()->Run();
}
	
void Robot::TeleopInit() {
}
	
void Robot::TeleopPeriodic() {
}
void Robot::TestPeriodic() {
	lw->Run();
}
START_ROBOT_CLASS(Robot);
