#include "subsystems/Subsystems.h"

#include "RobotMap.h"

ShooterSubsystem::ShooterSubsystem() : frc::Subsystem("ShooterSubsystem") {}

void ShooterSubsystem::InitDefaultCommand() {
  SetDefaultCommand(new DefaultShooterCommand());
}