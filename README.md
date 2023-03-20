Dokumentation: Bild herunterladen und im Vollbildmodus anzeigen

Dieses Skript ist für Digispark (ATtiny85) geschrieben und verwendet die DigiKeyboard-Bibliothek. Es öffnet die PowerShell auf einem Windows-Computer, lädt ein Bild aus dem Internet herunter, zeigt es im Standardbildbetrachter an und versucht, den Vollbildmodus zu aktivieren.
Voraussetzungen

Digispark (ATtiny85) Board
DigiKeyboard-Bibliothek

Code-Struktur
Einbindung der DigiKeyboard-Bibliothek

#define kbd_es_es
#include "DigiKeyboard.h"

Die DigiKeyboard-Bibliothek wird eingebunden, und die Tastaturbelegung wird auf Spanisch (es_ES) festgelegt. Ändern Sie die Tastaturbelegung entsprechend Ihrer Anforderungen.
setup()-Funktion


void setup() {
  DigiKeyboard.update();
  DigiKeyboard.delay(5000); 

Die setup()-Funktion beginnt mit einem Update der DigiKeyboard-Bibliothek und einer Verzögerung von 5 Sekunden, um dem Digispark genügend Zeit zum Einstecken und Erkennen durch das Betriebssystem zu geben.


  // Win + R drücken, um das Ausführen-Fenster zu öffnen
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(250);

Das Skript drückt die Tastenkombination Win + R, um das "Ausführen"-Fenster zu öffnen. Anschließend wird eine Verzögerung von 250 Millisekunden hinzugefügt.


  // "powershell" eingeben und Enter drücken, um die PowerShell zu öffnen
  DigiKeyboard.println("powershell");
  DigiKeyboard.delay(250);

Es schreibt "powershell" und drückt die Eingabetaste, um die PowerShell zu öffnen. Danach wird eine weitere Verzögerung von 250 Millisekunden hinzugefügt.


  // Den Befehl zum Herunterladen des Bildes eingeben und Enter drücken
  // Ersetzen Sie "IMAGE_URL" durch die tatsächliche URL des gewünschten Bildes
  DigiKeyboard.println("Invoke-WebRequest -Uri \"https://i.imgur.com/7emoQtX.jpeg\" -OutFile \"image.jpg\"");
  DigiKeyboard.delay(250);

Der Befehl Invoke-WebRequest wird verwendet, um das Bild von der angegebenen URL herunterzuladen und als "image.jpg" zu speichern. Die URL des gewünschten Bildes sollte hier eingegeben werden. Eine weitere Verzögerung von 250 Millisekunden wird hinzugefügt.


  // Befehl zum Öffnen des heruntergeladenen Bildes im Standardbildbetrachter eingeben und Enter drücken
  DigiKeyboard.println("Invoke-Item \"image.jpg\"");
  DigiKeyboard.delay(1000); // Warten Sie 1 Sekunde, um dem Bildbetrachter Zeit zum Öffnen zu geben

Der Befehl Invoke-Item wird verwendet, um das heruntergeladene Bild im Standardbildbetrachter zu öffnen. Der Befehl DigiKeyboard.delay wartet 1 Sekunde, um dem Bildbetrachter Zeit zum Öffnen zu geben. Falls es zu Probleme bei der Vollbilddarstellung gibt kann man den Delay auf 2500 Millisekunden erhöhen.

  // F11-Taste drücken, um den Vollbildmodus zu aktivieren
  DigiKeyboard.sendKeyStroke(KEY_F11);
}

Nachdem das Bild geöffnet wurde, drückt das Skript die F11-Taste, um den Vollbildmodus im Bildbetrachter zu aktivieren. loop()-Funktion


void loop() {
  // Leere loop()-Funktion, da das Skript nur einmal ausgeführt werden soll
}

Die loop()-Funktion ist absichtlich leer, da das Skript nur einmal ausgeführt werden soll. In diesem Fall wird die loop()-Funktion nicht wiederholt, wie es normalerweise bei Arduino-Sketches der Fall ist.
Zusammenfassung

Dieses Skript für Digispark (ATtiny85) und die DigiKeyboard-Bibliothek automatisiert den Prozess, die PowerShell auf einem Windows-Computer zu öffnen, ein Bild aus dem Internet herunterzuladen, es im Standardbildbetrachter anzuzeigen und den Vollbildmodus zu aktivieren. Das Skript führt die Aktionen nur einmal aus, da die loop()-Funktion leer ist.
