#include <Servo.h>

Servo myServo;
const int servoPin = 9;

void setup() {
    myServo.attach(servoPin);
}

void loop() {
    myServo.write(120);  // 向左擺動
    delay(100);
    myServo.write(60);   // 向右擺動
    delay(100);
} 