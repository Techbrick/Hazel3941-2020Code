/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/Subsystems.h"

DriveSubsystem::DriveSubsystem() : frc::Subsystem("DriveSubsystem"),
LeftController(LEFT_DRIVE_CONTROLLER_ID),
LeftFollower(LEFT_DRIVE_FOLLOWER_ID),
RightController(RIGHT_DRIVE_CONTROLLER_ID),
RightFollower(RIGHT_DRIVE_FOLLOWER_ID),
driveControl(LeftController, RightController)
{
    LeftController.SetInverted(false);
    LeftController.SetNeutralMode(Brake);
    LeftFollower.SetInverted(false);
    LeftFollower.SetNeutralMode(Brake);
    LeftFollower.Follow(LeftController);
    RightController.SetInverted(false);
    RightController.SetNeutralMode(Brake);
    RightFollower.SetInverted(false);
    RightFollower.SetNeutralMode(Brake);
    RightFollower.Follow(RightController);
}

void DriveSubsystem::InitDefaultCommand() {
    SetDefaultCommand(new DefaultDriveCommand());
}


