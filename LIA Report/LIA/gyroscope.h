#ifndef GYROSCOPE_H  // Header guard to prevent multiple inclusions
#define GYROSCOPE_H

#include <Arduino.h>  // Include the Arduino library
#include <Wire.h>     // Include the Wire library for I2C communication

class gyroscopeClass {
private:
  int i2c_addr;                                 // I2C address of the gyroscope
  int gyro_x, gyro_y, gyro_z;                   // Gyroscope sensor readings
  long gyro_x_cal, gyro_y_cal, gyro_z_cal;      // Calibration values for gyroscope
  boolean set_gyro_angles;                      // Flag to indicate if gyroscope angles are set
  long acc_x, acc_y, acc_z, acc_total_vector;   // Accelerometer sensor readings
  float angle_roll_acc, angle_pitch_acc;        // Angle values calculated from accelerometer
  float angle_pitch, angle_roll;                // Gyroscope-based angle values
  int angle_pitch_buffer, angle_roll_buffer;    // Buffers to store gyroscope angle values
  float angle_pitch_output, angle_roll_output;  // Final gyroscope angle values
  long loop_timer;                              // Timer variable for loop duration
  int temp;                                     // Temporary variable for storing values

public:
  gyroscopeClass(){};          // Default constructor
  gyroscopeClass(int unused);  // Constructor with parameter

  void setupMPU6050Registers();  // Setup MPU6050 registers
  void readMPU6050Data();        // Read MPU6050 data
  void init();                   // Initialization function
  void begin();                  // Begin function for gyroscope
};

#endif  // End of header guard
