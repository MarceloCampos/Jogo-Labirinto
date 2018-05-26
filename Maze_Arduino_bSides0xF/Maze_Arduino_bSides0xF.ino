/*
  Rev. 00 - 19/05/2018
  by Marcelo Campos - Garoa Hacker Clube
  Arquivos impressão 3D: https://github.com/MarceloCampos/
  
*/

#include <Servo.h>

Servo servoCima;  
Servo servoBaixo;

int joyPinEixoX = 1;        // Joystick eixo X
int joyPinEixoY = 0;        // Joystick eixo Y 
int val_X;
int val_Y;

void setup() {
  servoCima.attach(7);      // attaches the servo on pin x to the servo object
  servoBaixo.attach(6);
}

void loop() {
  val_X = analogRead(joyPinEixoX);          // 
  val_Y = analogRead(joyPinEixoY); 
  
  val_X = map(val_X, 0, 1023, 75, 125);     //
  val_Y = map(val_Y, 0, 1023, 75, 125);
  
  servoCima.write(val_X);                   // 
  servoBaixo.write(val_Y);
  
  delay(15);                                // espera
}
