#include <Arduino.h>
#define a 500
void setup() {
  Serial.begin(115200);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);



}

void loop() {

  char comando = Serial.read();
  switch (comando) {
    case 's':
      digitalWrite(2, 1 );
      digitalWrite(3, 0 );
      break;
    case 'w':
      digitalWrite(2, 0 );
      digitalWrite(3, 1 );
      break;
    case 'x':
      digitalWrite(2, 0 );
      digitalWrite(3, 0 );
      break;
    case 'd':
      digitalWrite(4, 1 );
      digitalWrite(5, 0 );
      break;
    case 'e':
      digitalWrite(4, 0 );
      digitalWrite(5, 1 );
      break;
    case 'c':
      digitalWrite(4, 0 );
      digitalWrite(5, 0 );
      break;
    case 'f':
      digitalWrite(6, 1 );
      digitalWrite(7, 0 );
      break;
    case 'r':
      digitalWrite(6, 0 );
      digitalWrite(7, 1 );
      break;
    case 'v':
      digitalWrite(6, 0 );
      digitalWrite(7, 0 );
      break;
    case 'g':
      digitalWrite(8, 1 );
      digitalWrite(9, 0 );
      break;
    case 't':
      digitalWrite(8, 0 );
      digitalWrite(9, 1 );
      break;
    case 'b':
      digitalWrite(8, 0 );
      digitalWrite(9, 0 );
      break;
    case 'h':
      digitalWrite(10, 1 );
      digitalWrite(11, 0 );
      break;
    case 'y':
      digitalWrite(10, 0 );
      digitalWrite(11, 1 );
      break;
    case 'n':
      digitalWrite(10, 0 );
      digitalWrite(11, 0 );
      break;

    case 'p':
      digitalWrite(2, 1 );
      digitalWrite(3, 0 );
      digitalWrite(4, 1 );
      digitalWrite(5, 0 );
      digitalWrite(6, 1 );
      digitalWrite(7, 0 );
      digitalWrite(8, 1 );
      digitalWrite(9, 0 );
      digitalWrite(10, 1 );
      digitalWrite(11, 0 );
      delay(10*a);
      digitalWrite(2, 0 );
      digitalWrite(3, 1 );
      digitalWrite(4, 0 );
      digitalWrite(5, 1 );
      digitalWrite(6, 0 );
      digitalWrite(7, 1 );
      digitalWrite(8, 0 );
      digitalWrite(9, 1 );
      digitalWrite(10, 0 );
      digitalWrite(11, 1 );
            delay(5.5*a);

      digitalWrite(2, 1);
      digitalWrite(3, 0 );
      delay(a);
      digitalWrite(4, 1 );
      digitalWrite(5, 0 );
      delay(a);
      digitalWrite(6, 1 );
      digitalWrite(7, 0 );
      delay(a);
      digitalWrite(8, 1 );
      digitalWrite(9, 0 );
      delay(a);
      digitalWrite(10, 1 );
      digitalWrite(11, 0 );
      delay(a);
      digitalWrite(2, 0 );
      digitalWrite(3, 1 );
      delay(a);
      digitalWrite(4, 0 );
      digitalWrite(5, 1 );
      delay(a);
      digitalWrite(6, 0 );
      digitalWrite(7, 1 );
      delay(a);
      digitalWrite(8, 0 );
      digitalWrite(9, 1 );
      delay(a);
      digitalWrite(10, 0 );
      digitalWrite(11, 1 );
      delay(a - 100);
      digitalWrite(2, 0 );
      digitalWrite(3, 0 );
      delay(a + 100);
      digitalWrite(4, 0 );
      digitalWrite(5, 0 );
      delay(a);
      digitalWrite(6, 0 );
      digitalWrite(7, 0 );
      delay(a);
      digitalWrite(8, 0 );
      digitalWrite(9, 0 );
      delay(a - 100);
      digitalWrite(10, 0 );
      digitalWrite(11, 0 );
      delay(a);
      break;
  }

}
