# Learning Arduino - ESP32 NeoPixel Control

This project contains starter code for controlling a NeoPixel LED strip with an ESP32 microcontroller.

## Hardware Requirements

- ESP32 development board (ESP32-DEVKIT or similar)
- NeoPixel (WS2812B) LED strip
- 5V power supply (depending on strip length)
- Jumper wires

## Wiring

- **NeoPixel Data Pin** → ESP32 GPIO 5
- **NeoPixel VCC** → 5V power supply
- **NeoPixel GND** → ESP32 GND and power supply GND

**Note:** Make sure to connect all grounds together (ESP32 GND, NeoPixel GND, and power supply GND).

## Configuration

The default configuration in `src/main.cpp`:
- **LED_PIN**: GPIO 5 (can be changed to any GPIO pin)
- **LED_COUNT**: 30 LEDs (adjust to match your strip length)

## Software Requirements

- [PlatformIO](https://platformio.org/) (recommended) or Arduino IDE
- Adafruit NeoPixel library (automatically installed via platformio.ini)

## Building and Uploading

### Using PlatformIO CLI

```bash
# Build the project
pio run

# Upload to ESP32
pio run --target upload

# Open serial monitor
pio device monitor
```

### Using PlatformIO IDE (VS Code)

1. Open the project folder in VS Code with PlatformIO extension installed
2. Click the checkmark icon to build
3. Click the arrow icon to upload
4. Click the plug icon to open the serial monitor

## Project Structure

```
.
├── include/          # Header files
├── lib/              # Project-specific libraries
├── src/              # Source files
│   └── main.cpp      # Main application code
├── test/             # Unit tests
├── platformio.ini    # PlatformIO configuration
└── README.md         # This file
```

## Current Functionality

The current code initializes the NeoPixel strip but does not perform any animations or effects. This serves as a scaffolding for future NeoPixel control implementations.

## License

MIT License - See LICENSE file for details.
