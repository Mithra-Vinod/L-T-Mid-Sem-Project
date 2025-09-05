# L-T-Mid-Sem-Project

## 🚗 Arduino-based Alcohol Detection and Engine Lock System

This project is a microcontroller-driven safety prototype aimed at preventing drink-and-drive incidents by detecting alcohol consumption in drivers and controlling vehicle ignition accordingly. Built around an Arduino Uno, the system integrates an MQ-3 alcohol sensor to capture breath samples and determine whether the alcohol concentration is within safe limits.

When the driver exhales near the sensor, the system continuously analyzes the sensor output. The results are displayed on a 16x2 LCD screen, which provides real-time feedback on alcohol levels along with system status messages such as “SAFE,” “ALERT,” or “DANGER.”

To strengthen user awareness, the system uses LEDs (Green for Safe, Red for Danger) and a buzzer for audio alerts. In the case of elevated alcohol readings, the relay module is triggered to cut off the vehicle’s ignition circuit, effectively preventing the engine from starting.

This project demonstrates how low-cost, widely available components can be combined into a reliable prototype to enhance road safety, reduce accidents, and promote responsible driving behavior.

## ✨ Features

Detects alcohol presence using MQ-3 sensor

Real-time alcohol level display on 16x2 LCD

Green LED (Safe) and Red LED (Danger) status indicators

Audio alert system using a buzzer

Relay-controlled ignition cutoff to prevent unsafe driving

Fully compatible with Arduino Uno and simulation platforms like Wokwi

## 🛠 Components Used

Arduino Uno R3 (Microcontroller)

MQ-3 Alcohol Sensor Module

16x2 LCD Display with I²C interface

Relay Module (5V, single channel)

Buzzer (piezo)

Green LED (Safe Indicator)

Red LED (Danger Indicator)

Resistors (470 Ω for LEDs)

Jumper wires (male-to-male)

Breadboard (optional, for prototyping)

## ⚙️ Working

The driver exhales near the MQ-3 sensor.

The Arduino Uno reads the sensor’s analog output.

Alcohol concentration is compared against preset thresholds.

Safe Zone → Green LED ON, engine enabled

Alert Zone/Danger Zone → Red LED ON, buzzer activated, relay cuts ignition

The 16x2 LCD displays sensor values and status messages.

The relay module controls the engine’s ignition line, disabling it if alcohol exceeds safe limits.

## 🚀 Future Implementations

Replace MQ-3 with a fuel-cell-based alcohol sensor for higher accuracy

Add GSM/GPS modules to alert family or authorities in case of violations

Implement data logging for long-term monitoring

Introduce fingerprint ignition lock for personalized driver verification

Compact PCB design for real-world integration into vehicles

## 👥 Contributors

Mithra Vinod
Aishwarya
Ameen
Pravin

## 📜 License

This project is licensed under the MIT License – you are free to use, modify, and distribute this project for educational and prototyping purposes.
