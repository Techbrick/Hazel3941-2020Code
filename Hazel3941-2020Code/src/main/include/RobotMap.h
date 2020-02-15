/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */

// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
// constexpr int kLeftMotor = 1;
// constexpr int kRightMotor = 2;

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
// constexpr int kRangeFinderPort = 1;
// constexpr int kRangeFinderModule = 1;



// Stores constants and defaults for universally accessable values.



// CAN loop IDs

static constexpr int RIGHT_DRIVE_CONTROLLER_ID  = 0;

static constexpr int RIGHT_DRIVE_FOLLOWER_A_ID  = 1;

static constexpr int RIGHT_DRIVE_FOLLOWER_B_ID  = 2;

static constexpr int CLIMB_CONTROLLER_ID        = 3;

static constexpr int INTAKE_ID                  = 4;

static constexpr int FEED_BELT_ID               = 5;

static constexpr int INDEX_WHEEL_ID             = 6;

static constexpr int ARM_ID                     = 7;

static constexpr int SHOOTER_A_ID               = 8;

static constexpr int SHOOTER_B_ID               = 9;

static constexpr int LIFT_ID                    = 10;

static constexpr int CLIMB_FOLLOWER_ID          = 12;

static constexpr int LEFT_DRIVE_FOLLOWER_A_ID   = 13;

static constexpr int LEFT_DRIVE_FOLLOWER_B_ID   = 14;

static constexpr int LEFT_DRIVE_CONTROLLER_ID   = 15;

// CAN loop IDs </>



// PID Defaults



// PID Defaults </>