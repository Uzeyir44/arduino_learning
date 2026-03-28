# Arduino Project

## Traffic Light Simulation

This project simulates the operation of a traffic light system using an Arduino. The program loops continuously every 5 seconds and controls LEDs and a buzzer to mimic real traffic and pedestrian signals.

### Functionality

- **Red LED**: ON for 2 seconds  
- **Yellow LED**: ON for 1 second  
- **Green LED**: ON for 2 seconds  
- **Blue LED**: Represents the pedestrian light, active when the red LED is on  
- **Passive Buzzer**: Active when the red LED is on  
- **Timing loop**: Repeats every 5 seconds  

### Components

- Arduino Uno (or compatible board)  
- Red, Yellow, Green, Blue LEDs  
- Passive Buzzer  
- Resistors:
  - 1 kΩ for LEDs  
  - 3 kΩ for buzzer (to reduce sound volume)  

### How to Use

1. Connect all components according to the code.  
2. Upload the Arduino code to your board.  
3. Observe the traffic light sequence and pedestrian signal.  

### Notes

- Ensure the resistor values match the schematic to prevent damage to components.  
- The blue LED and buzzer are synchronized with the red LED to represent pedestrian crossing safely.  
