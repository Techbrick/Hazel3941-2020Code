#include "subsystems/Subsystems.h"

#include "RobotMap.h"

IntakeSubsystem::IntakeSubsystem() : frc::Subsystem("IntakeSubsystem"),
intakeMotor(INTAKE_ID) {}

void IntakeSubsystem::InitDefaultCommand() {
  SetDefaultCommand(new DefaultIntakeCommand());
}