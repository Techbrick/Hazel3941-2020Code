#include "subsystems/Subsystems.h"

IntakeSubsystem::IntakeSubsystem() : frc::Subsystem("IntakeSubsystem"),
intakeMotor(INTAKE_ID) {}

void IntakeSubsystem::InitDefaultCommand() {
  SetDefaultCommand(new DefaultIntakeCommand());
}