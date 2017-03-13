/**********************************************************************************
**                                                                               **
**                           Cristofer Pines                                     **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led0 = 5;          // nom al pin 5 
const int led1 = 6;          // nom al pin 6 
const int led2 = 7;          // nom al pin 7
const int led3 = 8;          // nom al pin 8 
const int led4 = 9;          // nom al pin 9 
const int led5 = 10;         // nom al pin 10 
const int led6 = 11;         // nom al pin 11 
const int led7 = 12;         // nom al pin 12 

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 5 (sortida)
  pinMode(led1, OUTPUT);     // definir el pin 6 (sortida)
  pinMode(led2, OUTPUT);     // definir el pin 7 (sortida)
  pinMode(led3, OUTPUT);     // definir el pin 8 (sortida)
  pinMode(led4, OUTPUT);     // definir el pin 9 (sortida)
  pinMode(led5, OUTPUT);     // definir el pin 10 (sortida)
  pinMode(led6, OUTPUT);     // definir el pin 11 (sortida)
  pinMode(led7, OUTPUT);     // definir el pin 12 (sortida)
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(led0, HIGH);    // 5V el pin 5
  digitalWrite(led1, HIGH);    // 5V el pin 6
  digitalWrite(led2, HIGH);    // 5V el pin 7
  digitalWrite(led3, HIGH);    // 5V el pin 8
  digitalWrite(led4, HIGH);    // 5V el pin 9
  digitalWrite(led5, HIGH);    // 5V el pin 10
  digitalWrite(led6, HIGH);    // 5V el pin 11
  digitalWrite(led7, HIGH);    // 5V el pin 12
  
  delay(500);                  // encesos a 500ms
  
  digitalWrite(led0, LOW);     // 0V el pin 5
  digitalWrite(led1, LOW);     // 0V el pin 6
  digitalWrite(led2, LOW);     // 0V el pin 7
  digitalWrite(led3, LOW);     // 0V el pin 8
  digitalWrite(led4, LOW);     // 0V el pin 9
  digitalWrite(led5, LOW);     // 0V el pin 10
  digitalWrite(led6, LOW);     // 0V el pin 11
  digitalWrite(led7, LOW);     // 0V el pin 12
  
  delay(500);                  // apagats els leds 500ms
}

//********** Funcions *************************************************************


//********** Loop *****************************************************************


//********** Funcions *************************************************************
