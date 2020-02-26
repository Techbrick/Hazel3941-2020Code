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
#include "frc/DigitalInput.h"
#include "frc/Compressor.h"
#include "frc/DoubleSolenoid.h"
#include "Objects.h"
#include "RobotMap.h"

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
    WPI_VictorSPX RightFollower;
    WPI_TalonSRX LeftController;
    WPI_VictorSPX LeftFollower;
    frc::DifferentialDrive driveControl;
  private:

};

class IndexSubsystem : public frc::Subsystem {
  public:
    IndexSubsystem();
    void InitDefaultCommand() override;
    //std::vector<Ball> balls;
  private:

};

class IntakeSubsystem : public frc::Subsystem {
  public:
    IntakeSubsystem();
    void InitDefaultCommand() override;
    TalonSRX intakeMotor;
    bool indexEnabled = false;
    bool manualEnabled = true;
  private:

};

class ShooterSubsystem : public frc::Subsystem {
  public:
    ShooterSubsystem();
    void InitDefaultCommand() override;
    TalonSRX armMotor;
    TalonSRX shooterController;
    TalonSRX shooterFollower;
    frc::DigitalInput upperLim{DIO_UPPER_LIM};
    frc::DigitalInput lowerLim{DIO_LOWER_LIM};
  private:

};
