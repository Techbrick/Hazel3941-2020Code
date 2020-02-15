#include "subsystems/Subsystems.h"

#include "RobotMap.h"

ClimberSubsystem::ClimberSubsystem() : frc::Subsystem("ClimberSubsystem") {}

void ClimberSubsystem::InitDefaultCommand() {
    SetDefaultCommand(new DefaultClimberCommand());
}