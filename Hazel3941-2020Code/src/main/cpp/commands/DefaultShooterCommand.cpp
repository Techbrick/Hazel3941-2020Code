/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/Commands.h"

#include "Robot.h"

DefaultShooterCommand::DefaultShooterCommand() {
  // Use Requires() here to declare subsystem dependencies
  Requires(&Robot::Shooter);
}

// Called just before this Command runs the first time
void DefaultShooterCommand::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void DefaultShooterCommand::Execute() {
  if(!Robot::Shooter.lowerLim.Get() && Robot::oi.DriverController->GetRawButton(1)){
    Robot::Shooter.armMotor.Set(motorcontrol::ControlMode::PercentOutput, 0.15);
  }else if(!Robot::Shooter.upperLim.Get() && Robot::oi.DriverController->GetRawButton(4)){
    Robot::Shooter.armMotor.Set(motorcontrol::ControlMode::PercentOutput, -0.15);
  }else{
    Robot::Shooter.armMotor.Set(motorcontrol::ControlMode::PercentOutput, 0);
  }
  if(Robot::oi.DriverController->GetRawButton(6)){
    Robot::Shooter.shooterController.Set(motorcontrol::ControlMode::PercentOutput, 1.0);
  }else{
    Robot::Shooter.shooterController.Set(motorcontrol::ControlMode::PercentOutput, 0.0);
  }
}

// Make this return true when this Command no longer needs to run execute()
bool DefaultShooterCommand::IsFinished() { return false; }

// Called once after isFinished returns true
void DefaultShooterCommand::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DefaultShooterCommand::Interrupted() {}
