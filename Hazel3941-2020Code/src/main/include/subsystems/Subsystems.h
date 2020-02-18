/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/commands/Subsystem.h>
#include "commands/Commands.h"
#include "ctre/Phoenix.h"
#include "frc/drive/DifferentialDrive.h"

class ExampleSubsystem : public frc::Subsystem {
  public:
    ExampleSubsystem();
    void InitDefaultCommand() override;

  private:
  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities
};

class ClimberSubsystem : public frc::Subsystem {
  public:
    ClimberSubsystem();
    void InitDefaultCommand() override;

  private:

};

class DriveSubsystem : public frc::Subsystem {
  public:
    DriveSubsystem();
    void InitDefaultCommand() override;
    // Remove WPI_ for motion magic or something
    WPI_TalonSRX RightController;
    WPI_VictorSPX RightFollowerA;
    WPI_VictorSPX RightFollowerB;
    WPI_TalonSRX LeftController;
    WPI_VictorSPX LeftFollowerA;
    WPI_VictorSPX LeftFollowerB;
    frc::DifferentialDrive driveControl;
  private:

};

class IndexSubsystem : public frc::Subsystem {
  public:
    IndexSubsystem();
    void InitDefaultCommand() override;

  private:

};

class IntakeSubsystem : public frc::Subsystem {
  public:
    IntakeSubsystem();
    void InitDefaultCommand() override;
    TalonSRX intakeMotor;
  private:

};

class ShooterSubsystem : public frc::Subsystem {
  public:
    ShooterSubsystem();
    void InitDefaultCommand() override;

  private:

};
