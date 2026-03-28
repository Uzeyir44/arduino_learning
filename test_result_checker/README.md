# Arduino Project

## Test Result Checker

This project reads user input from the Arduino Serial Monitor (an integer score between 0 and 100) and controls LEDs based on the score:

- If the score is **50 or higher**, only the **blue LED** blinks every **500 ms**.  
- If the score is **below 50**, **all LEDs** blink every **300 ms**.

### Components
- Arduino Uno (or compatible board)  
- Blue LED  
- 2 Red LEDs (for failing scores)  
- Resistors  
- Jumper wires  

### How to Use
1. Upload the code to your Arduino.  
2. Open the Serial Monitor.  
3. Enter a score (integer 0–100).  
4. Observe the LED behavior.

### Notes
- Make sure to match your LED connections to the pins defined in the code.  
- The program automatically converts the Serial input to an integer type.

### Example
- Input: `75` → Blue LED blinks every 500 ms  
- Input: `40` → All LEDs blink every 300 ms