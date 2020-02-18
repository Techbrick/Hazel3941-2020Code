/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/Commands.h"

#include "Robot.h"
#include "RobotMap.h"

DefaultIntakeCommand::DefaultIntakeCommand() {
  // Use Requires() here to declare subsystem dependencies
  Requires(&Robot::Intake);
}

// Called just before this Command runs the first time
void DefaultIntakeCommand::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void DefaultIntakeCommand::Execute() {
  if(Robot::oi.DriverController->GetRawButton(INTAKE_BUTTON)){
    Robot::Intake.intakeMotor.Set(motorcontrol::ControlMode::PercentOutput, 1);
  }else{
    Robot::Intake.intakeMotor.Set(motorcontrol::ControlMode::PercentOutput, 0);
  }

}

// Make this return true when this Command no longer needs to run execute()
bool DefaultIntakeCommand::IsFinished() { return false; }

// Called once after isFinished returns true
void DefaultIntakeCommand::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DefaultIntakeCommand::Interrupted() {}
