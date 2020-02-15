/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/Commands.h"

#include "Robot.h"

DefaultIndexCommand::DefaultIndexCommand() {
  // Use Requires() here to declare subsystem dependencies
  Requires(&Robot::Indexer);
}

// Called just before this Command runs the first time
void DefaultIndexCommand::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void DefaultIndexCommand::Execute() {}

// Make this return true when this Command no longer needs to run execute()
bool DefaultIndexCommand::IsFinished() { return false; }

// Called once after isFinished returns true
void DefaultIndexCommand::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DefaultIndexCommand::Interrupted() {}