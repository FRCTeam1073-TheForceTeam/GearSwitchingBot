#ifndef DRIVE_TRAIN_H
#define DRIVE_TRAIN_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "../WPILibExtensions/WPILibExtensions.h"
class DriveTrain : public Subsystem {
public:
	DriveTrain();
	void FeedMotors(float x, float y);
	void InitDefaultCommand();
};
#endif
