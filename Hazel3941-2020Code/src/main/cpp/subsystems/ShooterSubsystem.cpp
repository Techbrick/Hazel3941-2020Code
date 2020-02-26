#include "subsystems/Subsystems.h"

ShooterSubsystem::ShooterSubsystem() : frc::Subsystem("ShooterSubsystem"),
armMotor(ARM_ID),
shooterController(SHOOTER_A_ID),
shooterFollower(SHOOTER_B_ID){
  armMotor.SetInverted(false);
  armMotor.SetNeutralMode(Brake);
  shooterFollower.SetInverted(true);
  shooterFollower.SetNeutralMode(Coast);
  shooterController.SetInverted(false);
  shooterController.SetNeutralMode(Coast);
  shooterFollower.Follow(shooterController);
}

void ShooterSubsystem::InitDefaultCommand() {
  SetDefaultCommand(new DefaultShooterCommand());
}