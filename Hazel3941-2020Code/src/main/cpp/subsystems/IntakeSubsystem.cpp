#include "subsystems/Subsystems.h"

#include "RobotMap.h"

IntakeSubsystem::IntakeSubsystem() : frc::Subsystem("IntakeSubsystem") {}

void IntakeSubsystem::InitDefaultCommand() {
  SetDefaultCommand(new DefaultIntakeCommand());
}