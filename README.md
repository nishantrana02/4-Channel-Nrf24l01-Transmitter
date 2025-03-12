# DIY Remote Control System with Joysticks and Arduino

## Overview  
This project is a **4-channel wireless remote control system** built using an **Arduino Nano**, **NRF24L01 module**, and **two joysticks**. It enables remote control via radio communication and is powered by a **7.4V battery pack**.

## Components Used  
- **Arduino Nano**  
- **NRF24L01 module** (for wireless communication)  
- **Two Joysticks**  
- **Vero Board**  
- **Jumper Wires**  
- **Soldering Iron**  
- **7.4V Battery Pack**  

## Circuit Setup  
1. **Connect** the NRF24L01 module and joysticks to the Arduino Nano using jumper wires.  
2. **Ensure** the 7.4V battery pack supplies power to the Arduino safely.  
3. **Secure** all components to avoid loose connections.  

## Programming the Arduino  
The Arduino Nano reads joystick values and transmits them using the NRF24L01 module.  

### Key Features in the Code:  
- Reads joystick input from **A0, A1, A2, and A3** analog pins.  
- Uses **RF24 library** for **NRF24L01 communication**.  
- Transmits **joystick data wirelessly**.  
- Displays values in the **serial monitor** for debugging.  
