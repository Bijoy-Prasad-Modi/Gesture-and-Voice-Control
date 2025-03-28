# Gesture and Voice Control using Python & Arduino

## **📌 Project Overview**
This project combines **gesture recognition** and **voice control** to interact with multimedia applications. It leverages:
- **Arduino Uno R3** and **HC-SR04 Ultrasonic Sensors** for gesture-based control
- **Python** for voice commands and system automation
- **Serial communication (CH340)** to connect Arduino with a laptop

This system allows users to perform actions like **playing music, controlling volume, pausing media, and navigating interfaces** with just **hand gestures** and **voice commands**.

---

## **⚙️ Hardware Components Used**
1. **Arduino Uno R3** – Microcontroller to process gesture inputs
2. **HC-SR04 Ultrasonic Sensors (x2)** – Detects hand gestures based on distance
3. **Male-to-Female Jumper Wires** – Connect sensors to the Arduino board
4. **USB Type-A to Type-B Cable** – Connects Arduino to a laptop for power & data transfer

---

## **🖥️ Software & Development Tools**
1. **Arduino IDE** – To write, compile, and upload code to Arduino
2. **Python 3.x** – To process voice commands and execute actions
3. **VS Code / PyCharm / Thonny / IDLE** – Recommended Python IDEs

---

## **🔗 Communication & Workflow**
- The **Arduino board** detects hand movements via ultrasonic sensors
- The **Python script** listens for voice commands
- Data is exchanged via **serial communication**
- Python processes commands and triggers actions (e.g., play/pause, volume control)

---

## **📜 Features & Functionalities**
### **🎤 Voice Control**
- Uses **SpeechRecognition** to convert voice into text
- Responds to voice commands for **media control, system tasks, and web searches**
- Provides feedback using **pyttsx3** (Text-to-Speech)

### **✋ Gesture-Based Control**
- **Rewind / Forward** – Hand movements control media navigation
- **Play / Pause** – Gestures trigger playback control
- **Volume Up / Down** – Adjust system volume with gestures

### **📡 Serial Communication & Automation**
- Establishes connection via **CH340 USB-SERIAL Driver**
- Uses **PyAutoGUI** for system automation (keyboard shortcuts)
- Integrates **OpenCV (cv2)** for camera-based enhancements

---

## **📂 Installation & Setup**
### **🔹 1. Install Required Python Libraries**
Open **Command Prompt (Windows) / Terminal (Mac/Linux)** and run:
```bash
pip install pyserial speechrecognition pyttsx3 pywhatkit wikipedia pyjokes opencv-python requests smtplib psutil instaloader pyautogui PyPDF2 pillow pyaudio numpy beautifulsoup4 PyQt5 speedtest-cli pytube qrcode
```
*If `pyaudio` installation fails, use:*
```bash
pip install pipwin
pipwin install pyaudio
```

### **🔹 2. Connect Arduino & Upload Code**
1. **Use a USB Type-A to Type-B cable** to connect **Arduino Uno R3** to the laptop.
2. Open **Arduino IDE**, load `Hand_Gesture_Control.ino`, and upload it to the board.
3. Check your **COM Port** in **Device Manager (Windows)** under `Ports (COM & LPT)`.

### **🔹 3. Run the Python Script**
#### **Option 1: Using Command Line**
```bash
cd path\to\your\project
python Built_Up_AI.py
```
#### **Option 2: Using VS Code** (Recommended)
1. Open `Built_Up_AI.py` in **VS Code**.
2. Click **Run ▶️** or press `Ctrl + Shift + B`.

---

## **🚀 Project Setup & Run Guide**
### **Step 1: Download & Install Arduino IDE**
- Get **Arduino IDE** from [Arduino Official Site](https://www.arduino.cc/en/software)
- Install it on your system and launch the application

### **Step 2: Upload the Arduino Code**
- Open **Hand_Gesture_Control.ino** in **Arduino IDE**
- Select **Board:** `Arduino Uno` & **Port:** (e.g., `COM3`)
- Click **Upload** to flash the code onto the Arduino

### **Step 3: Install Python & Dependencies**
- Ensure Python **3.x** is installed ([Download Python](https://www.python.org/downloads/))
- Install required Python libraries using the command:
```bash
pip install -r requirements.txt
```

### **Step 4: Run the Python Script**
1. **Ensure the Arduino board is connected via USB**
2. Open **Command Prompt / Terminal**
3. Navigate to the project folder:
```bash
cd path/to/your/project
```
4. Run the script:
```bash
python Built_Up_AI.py
```

### **Step 5: Test Voice & Gesture Control**
- Give **voice commands** like: _"Jarvis, play music"_
- Perform **hand gestures** to test **play/pause, volume control, navigation**

---

## **📊 Testing the System**
✔️ **Give voice commands** (e.g., "Jarvis, play music")
✔️ **Move hand in front of ultrasonic sensors** to trigger gestures
✔️ **Monitor serial communication output** in Python

---

## **🛠️ Troubleshooting**
| Issue | Solution |
|---------------------|---------------------------------------------|
| Python script not running | Ensure required libraries are installed via `pip` |
| Arduino not detected | Check COM port, try a different USB cable/port |
| CH340 driver missing | Install CH340 driver from [here](https://www.wch.cn/downloads/CH341SER_EXE.html) |
| Voice commands not recognized | Adjust microphone settings, ensure no background noise |
| Gestures not working | Verify sensor connections & power supply |

---

## **📌 Future Enhancements**
🚀 Implement **AI-based gesture recognition** using **OpenCV**
🚀 Add **custom voice assistant features**
🚀 Integrate with **smart home automation** systems

---

## **📜 References & Inspiration**
- **[Circuit Digest](https://circuitdigest.com/microcontroller-projects/control-your-computer-with-hand-gestures)**
- **[Electronics Hub](https://www.electronicshub.org/arduino-based-hand-gesture-control-computer/)**

---

### **⭐ If you find this project useful, consider giving it a star on GitHub!** 🌟

