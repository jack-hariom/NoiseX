# NOISE-X – Smart Noise Level Monitoring & Silence Maker System

**By:** Hariom Sharma, Anamika Tiwari, Anant, Sudhanshu, Abhiraj

---

## Table of Contents

* [Objective](#objective)
* [Components Required](#components-required)
* [Working Principle](#working-principle)
* [Circuit Description](#circuit-description)
* [Code Overview](#code-overview)
* [Results](#results)
* [Applications](#applications)
* [Conclusion](#conclusion)
* [Future Scope](#future-scope)

---

## Objective

To build a smart, real-time noise monitoring and management system designed for quiet zones such as libraries. The system detects noise levels, provides visual feedback using expressive emojis, and highlights noisy seats to encourage silence and discipline.

---

## Components Required

* Arduino Nano
* 4 Microphone Sound Sensors
* 3 LEDs with Emoji Stickers:

  * Green – Happy
  * Blue – Neutral
  * Red – Angry
* 4 Number Indicator LEDs (labeled 1, 2, 3, 4 for seat identification)
* 2 White LEDs (Warning indicators)
* Plastic sheet (for emoji display)
* Emoji stickers
* Wires and Breadboard
* Power supply (5V)
* Optional: Multiplexer (for more seats)

---

## Working Principle

### Sound Detection

* Each microphone is assigned to a seat or zone.
* Sensors constantly monitor ambient noise.

### Averaging Sound Levels

* Arduino collects data from all microphones.
* Computes the average noise level.

### Feedback Display

* **Green Emoji (Happy):** Noise is below calm threshold.
* **Blue Emoji (Neutral):** Noise is slightly higher, indicating moderate sound.
* **Red Emoji (Angry):** Noise exceeds acceptable levels, acting as a warning.

### Seat Number Display

* The noisiest seat triggers its number LED.
* White LEDs flash a “Shhh!” message to signal immediate silence.

---

## Circuit Description

* Microphone sensors are connected to the Arduino Nano's analog input pins.
* LEDs are connected to digital output pins through resistors.
* Multiplexer (optional) can extend input capacity beyond 4 microphones.
* Power is supplied via 5V USB or battery.

---

## Code Overview

* Arduino sketch initializes analog inputs for microphones and digital outputs for LEDs.
* Continuously samples sound levels, calculates an average, and updates LED states based on thresholds.
* The seat with the highest noise triggers its number LED and white warning LEDs.

---

## Results

* Provides visual and intuitive feedback for maintaining silence.
* Encourages users to be more self-aware and reduces noise interruptions.
* Can be scaled to larger areas using multiplexers.

---

## Applications

* Libraries
* Study Rooms
* Exam Halls
* Meditation Centers

---

## Conclusion

NOISE-X is a simple yet effective system that uses basic electronics to deliver an intelligent solution for managing noise. The emoji-based interface makes it playful while promoting discipline and responsibility in shared silent spaces.

---

## Future Scope

* Add Wi-Fi support via ESP8266/ESP32 for remote monitoring.
* Store noise data logs for analysis.
* Add a speaker to play a “Shhh!” audio message.
* Expand the system to 16 or more seats using a multiplexer.

---

