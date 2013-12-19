#include "Robot.h"
OI* Robot::oi = 0;
Robot::Robot() {}
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
	Scheduler::GetInstance()->Run();
}
void Robot::TestPeriodic() {
	lw->Run();
}
void Robot::DisabledInit() {
	
}
void Robot::DisabledPeriodic() {
	
}
START_ROBOT_CLASS(Robot);
