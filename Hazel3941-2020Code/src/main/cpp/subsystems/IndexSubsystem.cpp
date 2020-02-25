#include "subsystems/Subsystems.h"

IndexSubsystem::IndexSubsystem() : frc::Subsystem("IndexSubsystem") {}

void IndexSubsystem::InitDefaultCommand() {
  SetDefaultCommand(new DefaultIndexCommand());
}