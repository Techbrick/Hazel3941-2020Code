#include "subsystems/Subsystems.h"

ShooterSubsystem::ShooterSubsystem() : frc::Subsystem("ShooterSubsystem"),
armMotor(ARM_ID){
  armMotor.SetInverted(false);
  armMotor.SetNeutralMode(Brake);
}

void ShooterSubsystem::InitDefaultCommand() {
  SetDefaultCommand(new DefaultShooterCommand());
}