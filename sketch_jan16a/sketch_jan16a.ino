#define in1 9
#define in2 8
#define in3 7
#define in4 6
/*#define enA 10
#define enB 5*/
int M1_Speed = 80; // speed of right motor 
int M2_Speed = 97; // speed of left motor
int LeftRotationSpeed = 250;  // Left Rotation Speed
int RightRotationSpeed = 250; // Right Rotation Speed
 
 
 void setup() {
   
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  /*pinMode(enA,OUTPUT);
  pinMode(enB,OUTPUT);*/
  pinMode(13, INPUT);
  /*pinMode(3, INPUT);*/
  Serial.begin(9600);
 
}
 
void loop() {
 
  int LEFT_SENSOR = digitalRead(13);
  /*int RIGHT_SENSOR = digitalRead(3);*/
   
  if(LEFT_SENSOR==0) {
    forward();
    Serial.print("front\n");
  }
 
  else if(LEFT_SENSOR==1) {
    left();
    Serial.print("left\n");
 }
 
  /*else if(RIGHT_SENSOR==1 && LEFT_SENSOR==0) {
    right();
    Serial.print("right\n");
  }
 
  else if(RIGHT_SENSOR==1 && LEFT_SENSOR==1) {
    Stop();
    Serial.print("Stop\n");
  }
}*/
 
 
 
void forward()
{
            digitalWrite(in1, HIGH);
            digitalWrite(in2, LOW);
            digitalWrite(in3, HIGH);
            digitalWrite(in4, LOW);
            analogWrite(enA, M1_Speed);
            analogWrite(enB, M2_Speed);
}
  
/*void backward()
{
            digitalWrite(in1, LOW);
            digitalWrite(in2, HIGH);
            digitalWrite(in3, LOW);
            digitalWrite(in4, HIGH);
            analogWrite(enA, M1_Speed);
            analogWrite(enB, M2_Speed);
            
}
  
void right()
{
            digitalWrite(in1, LOW);
            digitalWrite(in2, HIGH);
            digitalWrite(in3, HIGH);
            digitalWrite(in4, LOW);
            analogWrite(enA, LeftRotationSpeed);
            analogWrite(enB, RightRotationSpeed);
            
}*/
  
void left()
{
            digitalWrite(in1, HIGH);
            digitalWrite(in2, LOW);
            digitalWrite(in3, LOW);
            digitalWrite(in4, HIGH);
            analogWrite(enA, LeftRotationSpeed);
            analogWrite(enB, RightRotationSpeed);
            
}
  
/*void Stop()
{
            digitalWrite(in1, LOW);
            digitalWrite(in2, LOW);
            digitalWrite(in3, LOW);
            digitalWrite(in4, LOW);
            
}*/
