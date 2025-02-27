import serial
import time
import pyautogui

# Establish serial connection with Arduino
ArduinoSerial = serial.Serial('COM16', 9600)
time.sleep(2)  # Wait for the communication to get established

while True:
    # Read the serial data and decode it
    incoming = ArduinoSerial.readline().decode('utf-8').strip()
    print(incoming)

    # Perform actions based on received input
    if 'Move Up' in incoming:
        # Perform your desired action for Move Up command
        print("Moving Up")
        pyautogui.scroll(100)

    elif 'Move Down' in incoming:
        # Perform your desired action for Move Down command
        print("Moving Down")
        pyautogui.scroll(-100)

    elif 'Next' in incoming:
        # Perform your desired action for Next command
        print("Going to next")
        pyautogui.hotkey('ctrl', 'pgdn')

    elif 'Previous' in incoming:
        # Perform your desired action for Previous command
        print("Going to previous")
        pyautogui.hotkey('ctrl', 'pgup')

    elif 'Stop' in incoming:
        # Perform your desired action for Stop command
        print("Stopping")
        pyautogui.press('space')

    elif 'Switch' in incoming:
        # Perform your desired action for Switch command
        print("Switching")
        pyautogui.keyDown('alt')                   # performs "alt+tab" operation which switches the tab
        pyautogui.press('tab')
        pyautogui.keyUp('alt')

    incoming = ""  # Reset the incoming data for the next iteration
