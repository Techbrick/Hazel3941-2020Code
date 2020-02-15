#include "subsystems/Subsystems.h"

#include "RobotMap.h"

IndexSubsystem::IndexSubsystem() : frc::Subsystem("IndexSubsystem") {}

void IndexSubsystem::InitDefaultCommand() {
  SetDefaultCommand(new DefaultIndexCommand());
}