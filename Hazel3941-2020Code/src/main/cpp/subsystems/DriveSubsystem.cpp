/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/Subsystems.h"

#include "RobotMap.h"

DriveSubsystem::DriveSubsystem() : frc::Subsystem("DriveSubsystem"),
LeftController(LEFT_DRIVE_CONTROLLER_ID),
LeftFollowerA(LEFT_DRIVE_FOLLOWER_A_ID),
LeftFollowerB(LEFT_DRIVE_FOLLOWER_B_ID),
RightController(RIGHT_DRIVE_CONTROLLER_ID),
RightFollowerA(RIGHT_DRIVE_FOLLOWER_A_ID),
RightFollowerB(RIGHT_DRIVE_FOLLOWER_B_ID)
{
    LeftController.SetInverted(false);
    LeftController.SetNeutralMode(Brake);
    LeftFollowerA.SetInverted(false);
    LeftFollowerA.SetNeutralMode(Brake);
    LeftFollowerA.Follow(LeftController);
    LeftFollowerB.SetInverted(false);
    LeftFollowerB.SetNeutralMode(Brake);
    LeftFollowerB.Follow(LeftController);
    RightController.SetInverted(false);
    RightController.SetNeutralMode(Brake);
    RightFollowerA.SetInverted(false);
    RightFollowerA.SetNeutralMode(Brake);
    RightFollowerA.Follow(RightController);
    RightFollowerB.SetInverted(false);
    RightFollowerB.SetNeutralMode(Brake);
    RightFollowerB.Follow(RightController);
}

void DriveSubsystem::InitDefaultCommand() {
    SetDefaultCommand(new DefaultDriveCommand());
}


