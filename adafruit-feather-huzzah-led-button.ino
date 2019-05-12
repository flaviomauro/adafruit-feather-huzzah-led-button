/* 
 *******************************************************************************
 * Description:
 * Sample code to turn a led on and off when pressing and releasing a button.
 * GitHub: https://github.com/flaviomauro/adafruit-feather-huzzah-led-button
 *******************************************************************************
 * Item list:
 * 
 * - 1 x Adafruit Feather
 * - 1 x Micro USB cable
 * - 1 x Protoboard
 * - 1 x Led
 * - 2 x 300ohm resistors
 * - 7 x Jumper cables M/M
 *******************************************************************************
 * @author: Flavio H. C. Mauro
 * @date:   06-Jan-2017
 * LinkedIn: https://br.linkedin.com/in/flaviomauro
 *******************************************************************************
 */
 
const int LED_PIN = 13; // Led connected to GPIO 13/D7
const int BTN_PIN = 12; // Button connected to GPIO 12/D6
int btnPressed = 0; // We'll use "btnPressed" to read the button state

void setup(){
  pinMode(LED_PIN, OUTPUT);
  pinMode(BTN_PIN, INPUT);
}

void loop(){
  btnPressed = digitalRead(BTN_PIN);
  
  if (btnPressed == HIGH){ // Button being pressed
    digitalWrite(LED_PIN, HIGH); // Turn led on
  }
  else{ // Button is not being pressed
    digitalWrite(LED_PIN, LOW); // Turn led off
  }
}
