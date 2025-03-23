#include <Servo.h>

Servo myServo;
const int servoPin = 9;     // 伺服馬達針腳
const int potPin = A0;      // 可變電阻針腳

void setup() {
    myServo.attach(servoPin);
}

void loop() {
    // 讀取可變電阻值（0-1023）
    int potValue = analogRead(potPin);
    
    // 將可變電阻值轉換為延遲時間（10-500毫秒）
    int delayTime = map(potValue, 0, 1023, 10, 500);
    
    // 控制紙鶴擺動
    myServo.write(120);     // 向左擺動
    delay(delayTime);       // 使用可變電阻控制的速度
    myServo.write(60);      // 向右擺動
    delay(delayTime);       // 使用可變電阻控制的速度
} 