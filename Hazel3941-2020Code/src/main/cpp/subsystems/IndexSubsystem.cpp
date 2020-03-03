#include "subsystems/Subsystems.h"

IndexSubsystem::IndexSubsystem() : frc::Subsystem("IndexSubsystem"),
indexWheelMotor(INDEXER_ID),
beltMotor(BELT_ID) {}

void IndexSubsystem::InitDefaultCommand() {
  SetDefaultCommand(new DefaultIndexCommand());
}