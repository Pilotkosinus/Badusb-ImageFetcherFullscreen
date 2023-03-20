#define kbd_es_es
#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.delay(5000);

  // Win + R drücken, um das Ausführen-Fenster zu öffnen
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(250);

  // "powershell" eingeben und Enter drücken, um die PowerShell zu öffnen
  DigiKeyboard.println("powershell");
  DigiKeyboard.delay(250);

  // Den Befehl zum Herunterladen des Bildes eingeben und Enter drücken
  // Ersetzen Sie "IMAGE_URL" durch die tatsächliche URL des gewünschten Bildes
  DigiKeyboard.println("Invoke-WebRequest -Uri \"https://i.imgur.com/7emoQtX.jpeg\" -OutFile \"image.jpg\"");
  DigiKeyboard.delay(250);

  // Befehl zum Öffnen des heruntergeladenen Bildes im Standardbildbetrachter eingeben und Enter drücken
  DigiKeyboard.println("Invoke-Item \"image.jpg\"");
  DigiKeyboard.delay(1000); // Warten Sie 1 Sekunde, um dem Bildbetrachter Zeit zum Öffnen zu geben

  // F11-Taste drücken, um den Vollbildmodus zu aktivieren
  DigiKeyboard.sendKeyStroke(KEY_F11);
}

void loop() {
  // Leere loop()-Funktion, da das Skript nur einmal ausgeführt werden soll
}