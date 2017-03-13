/**********************************************************************************
**                                                                               **
**                           Cristofer Pines                                     **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************
//********** Variables ************************************************************
const int led0 = 5;          // nom al pin 5 de l’Arduino
const int led1 = 6;          // nom al pin 6 de l’Arduino
const int led2 = 7;          // nom al pin 7 de l’Arduino
const int led3 = 8;          // nom al pin 8 de l’Arduino
const int led4 = 9;          // nom al pin 9 de l’Arduino
const int led5 = 10;         // nom al pin 10 de l’Arduino
const int led6 = 11;         // nom al pin 11 de l’Arduino
const int led7 = 12;         // nom al pin 12 de l’Arduino
int pausa = 500;             // t=ms

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // pin 5 (sortida)
  pinMode(led1, OUTPUT);     // pin 6 (sortida)
  pinMode(led2, OUTPUT);     // pin 7 (sortida)
  pinMode(led3, OUTPUT);     // pin 8 (sortida)
  pinMode(led4, OUTPUT);     // pin 9 (sortida)
  pinMode(led5, OUTPUT);     // pin 10 (sortida)
  pinMode(led6, OUTPUT);     // pin 11 (sortida)
  pinMode(led7, OUTPUT);     // pin 12 (sortida)
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(led0, HIGH);    // 5V el pin 5
  digitalWrite(led1, LOW);     // 0V el pin 6
  digitalWrite(led2, HIGH);    // 5V el pin 7
  digitalWrite(led3, LOW);     // 0V el pin 8
  digitalWrite(led4, HIGH);    // 5V el pin 9
  digitalWrite(led5, LOW);     // 0V el pin 10
  digitalWrite(led6, HIGH);    // 5V el pin 11
  digitalWrite(led7, LOW);     // 0V el pin 12
  
  delay(pausa);                  // leds pausa=ms
  
  digitalWrite(led0, LOW);     // posar 0V el pin 5
  digitalWrite(led1, HIGH);    // posar 5V el pin 6
  digitalWrite(led2, LOW);     // posar 0V el pin 7
  digitalWrite(led3, HIGH);    // posar 5V el pin 8
  digitalWrite(led4, LOW);     // posar 0V el pin 9
  digitalWrite(led5, HIGH);    // posar 5V el pin 10
  digitalWrite(led6, LOW);     // posar 0V el pin 11
  digitalWrite(led7, HIGH);    // posar 5V el pin 12
  
  delay(pausa);                  // leds pausa=ms
}

//********** Funcions *************************************************************
