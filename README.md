# Simple Arduino LED Blink Project
This repository contains a simple electronic circuit project that uses an Arduino UNO to alternate blinking two LEDs, along with the corresponding code.

## Project Description
The project features a flip-flop circuit setup where two LEDs blink in an alternating pattern. When one LED is on, the other is off, and this alternation continues cyclically. The process is controlled through the digital pins of the Arduino.

## Circuit Diagram
The circuit is constructed on a breadboard using an Arduino UNO, two LEDs, two 220-ohm resistors, and jumper wires. One LED is connected to pin 10 and the other to pin 9. Resistors are connected to the long leg (anode) of each LED to limit the current and prevent the LEDs from burning out.

## Code Explanation

void setup() { <hr>
  pinMode(10, OUTPUT);<hr>
  pinMode(9, OUTPUT);<hr>
}<hr>

void loop() {<hr>
  digitalWrite(10, HIGH);<hr>
  digitalWrite(9, LOW);<hr>
  delay(200);<hr>
  digitalWrite(9, HIGH);<hr>
  digitalWrite(10, LOW);<hr>
  delay(200);<hr>
}<hr>

## Setup

To run this project on your system, follow these steps:

1. **Install the Arduino IDE** on your computer from the [Arduino website](https://www.arduino.cc/en/Main/Software).
2. **Clone or download** this repository to your local machine.
3. **Open the `flip_flop.ino` file** in the Arduino IDE.
4. **Connect your Arduino UNO** to your computer using a USB cable.
5. In the Arduino IDE, go to the **Tools** menu, **select the correct port** for your Arduino, and also select **Arduino UNO as the board**.
6. **Press the Upload button** to compile and upload the code to your Arduino.

After uploading, the LEDs connected to pins 10 and 9 on the Arduino should start blinking alternately.

## Contributing

We welcome contributions to this project! If you would like to contribute, please follow these steps:

1. **Fork the repository** on GitHub.
2. **Create a new branch** for your changes.
3. **Make your changes** and commit them with clear commit messages.
4. **Push your changes** to your fork.
5. **Submit a pull request** with a clear description of what your changes do and why they should be included.

For any questions or issues, please open an issue in the **Issues** section of the repository.


