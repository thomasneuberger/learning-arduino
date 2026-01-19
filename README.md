# Learning Arduino - ESP32 NeoPixel Control

This project contains starter code for controlling a NeoPixel LED strip with an ESP32 microcontroller.

## Hardware Requirements

- ESP32 development board (ESP32-DEVKIT or similar)
- NeoPixel (WS2812B) LED strip
- 5V power supply (depending on strip length)
- Jumper wires

## Wiring

- **NeoPixel Data Pin** → ESP32 GPIO 22
- **NeoPixel VCC** → 5V power supply
- **NeoPixel GND** → ESP32 GND and power supply GND

**Note:** Make sure to connect all grounds together (ESP32 GND, NeoPixel GND, and power supply GND).

## Configuration

The default configuration in `src/main.cpp`:
- **LED_PIN**: GPIO 22 (can be changed to any GPIO pin)
- **LED_COUNT**: 12 LEDs (adjust to match your strip length)

## Software Requirements

- [PlatformIO](https://platformio.org/) (recommended) or Arduino IDE
- Adafruit NeoPixel library (automatically installed via platformio.ini)

## Development Environment Setup

### Option 1: PlatformIO IDE (Recommended)

1. **Install Visual Studio Code**
   - Download and install [VS Code](https://code.visualstudio.com/)

2. **Install PlatformIO Extension**
   - Open VS Code
   - Go to Extensions (Ctrl+Shift+X / Cmd+Shift+X)
   - Search for "PlatformIO IDE"
   - Click Install
   - Restart VS Code when prompted

3. **Open the Project**
   - File → Open Folder
   - Select the project root directory
   - PlatformIO will automatically detect the `platformio.ini` file and install dependencies

### Option 2: PlatformIO CLI

1. **Install PlatformIO Core**
   ```bash
   # Using pip (Python 3.6+)
   pip install -U platformio
   
   # Or using the installer script (Linux/Mac)
   curl -fsSL https://raw.githubusercontent.com/platformio/platformio-core-installer/master/get-platformio.py -o get-platformio.py
   python3 get-platformio.py
   ```

2. **Navigate to Project Directory**
   ```bash
   cd /path/to/learning-arduino
   ```

3. **Install Dependencies**
   ```bash
   pio pkg install
   ```

### Option 3: Arduino IDE

1. **Install Arduino IDE**
   - Download from [Arduino.cc](https://www.arduino.cc/en/software)

2. **Add ESP32 Board Support**
   - File → Preferences
   - Add to Additional Boards Manager URLs:
     ```
     https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
     ```
   - Tools → Board → Boards Manager
   - Search for "esp32" and install "esp32 by Espressif Systems"

3. **Install Adafruit NeoPixel Library**
   - Sketch → Include Library → Manage Libraries
   - Search for "Adafruit NeoPixel"
   - Install the library

4. **Configure Board Settings**
   - Tools → Board → ESP32 Arduino → ESP32 Dev Module
   - Tools → Upload Speed → 115200

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
