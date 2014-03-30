/********
 * |)|2\/\//-\|<`/
 **
 * Arduino - Two - Reading a the 2nd pin.
 **
 * @author     Joaquin Lopez <drwaky@gmail.com> 
 * @twitter    @drwaky
 * @bitbucket  drwaky
 * @github     drwaky
 * @copyright  Copyright (c) 2014, DrWaky
 * @version    1.0
 * @date       2014/03/30
 * @license    GPLv3 - https://www.gnu.org/licenses/gpl-3.0.html
 * @category   Arduino
 **
 Based on Arduino documentation - Turn on a LED when a button is pressed.
 Arduino board monitoring this through the 2nd digital pin, sending it's
 value to the PC by the serial USB connection.
 (A 1ms delay is included for stability).
 **/
 
 int btnPin = 2; //A name for the 2nd pin.
 
 void setup(){
   Serial.begin(9600); //Start a 9600 bits per second serial communication.
   pinMode(btnPin, INPUT); //Initialize the digital pin as an input.
 }
 
 void loop(){
   int btnVal = digitalRead(btnPin); //Read the value of the input pin (1 when the button is pressed).
   Serial.println(btnVal); //Print out the value through the serial connection.
   delay(1);
 }
