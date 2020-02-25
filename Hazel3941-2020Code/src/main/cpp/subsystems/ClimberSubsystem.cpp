#include "subsystems/Subsystems.h"

ClimberSubsystem::ClimberSubsystem() : frc::Subsystem("ClimberSubsystem") {}

void ClimberSubsystem::InitDefaultCommand() {
    SetDefaultCommand(new DefaultClimberCommand());
}