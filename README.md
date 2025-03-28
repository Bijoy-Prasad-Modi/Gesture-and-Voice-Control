# Gesture and Voice Control using Python, Arduino

## **Project Overview**

This project combines gesture and voice recognition to control multimedia applications, leveraging Python for voice commands and Arduino for gesture detection. It aims to provide an intuitive way to interact with systems using natural gestures and spoken commands. The Arduino microcontroller captures gestures using ultrasonic sensors, while Python manages voice commands and system integration.

## **Technologies Used**

1. **Arduino** :

   * Used for gesture recognition via ultrasonic sensors.
   * Controls multimedia actions based on predefined distance ranges detected by sensors.
2. **Python** :

   * Manages voice recognition and command execution.
   * Integrates with external libraries for system operations and user interaction.
3. **Communication Interface** :

   * Serial communication (via USB) between Arduino and Python for seamless data exchange.

## **Python Libraries and Their Purposes**

1. **SpeechRecognition** : Converts voice input into text commands for interpretation.
2. **pyttsx3** : Text-to-speech engine to provide audible feedback to the user.
3. **pywhatkit** : Plays songs or executes YouTube actions based on voice commands.
4. **pyjokes** : Retrieves and shares jokes as a part of interaction.
5. **PyAutoGUI** : Simulates keyboard key presses for media control, such as play, pause, or volume adjustment.
6. **cv2 (OpenCV)** : Used for camera access and capturing visual input if needed.
7. **serial** : Enables serial communication to read gesture commands from Arduino.
8. **datetime** : Retrieves current time and date for time-specific commands.
9. **wikipedia** : Provides quick information lookup for general knowledge queries.
10. **pyaudio** : Manages audio input and output, essential for voice interaction.
11. **PyQt5** : Implements a graphical user interface for the application.

## **Arduino Components**

1. **Ultrasonic Sensors** : Detect gestures by measuring distances based on echo times.
2. **Serial Communication** : Transfers gesture data to Python for further processing.

## **Key Functionalities**

1. **Gesture Recognition** : Specific hand movements trigger actions like

   * `Rewind` or `Forward`
   * `Volume Up` or `Volume Down`
   * `Play/Pause`
2. **Voice Commands** : Execute tasks like playing music, searching the web, or managing system settings using voice commands.
3. **System Integration** : Allows control over various applications, including media players and social platforms.

## Reference

* [circuitdigest.com](https://circuitdigest.com/microcontroller-projects/control-your-computer-with-hand-gestures)
* [electronicshub.org](https://www.electronicshub.org/arduino-based-hand-gesture-control-computer/)
