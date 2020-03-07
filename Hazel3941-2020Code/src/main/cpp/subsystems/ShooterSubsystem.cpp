#include "subsystems/Subsystems.h"

ShooterSubsystem::ShooterSubsystem() : frc::Subsystem("ShooterSubsystem"),
armMotor(ARM_ID),
shooterController(SHOOTER_A_ID),
shooterFollower(SHOOTER_B_ID){
  armMotor.ConfigFactoryDefault();
  armMotor.SetInverted(false);
  armMotor.SetNeutralMode(Brake);
  /*armMotor.ConfigReverseLimitSwitchSource(
					LimitSwitchSource::LimitSwitchSource_FeedbackConnector,
					LimitSwitchNormal::LimitSwitchNormal_NormallyClosed);
  */
  shooterFollower.ConfigFactoryDefault();
  shooterFollower.SetInverted(false);
  shooterFollower.SetNeutralMode(Coast);

  shooterController.ConfigFactoryDefault();
  shooterController.SetInverted(true);
  shooterController.SetNeutralMode(Coast);
  
  shooterFollower.Follow(shooterController);
}

void ShooterSubsystem::InitDefaultCommand() {
  SetDefaultCommand(new DefaultShooterCommand());
}