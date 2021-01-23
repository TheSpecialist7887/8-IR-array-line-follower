// IR Sensors
#define s1 A0;      // Left most sensor
#define s2 A1;
#define s3 A2;
#define s4 A3;      
#define s5 A4;
#define s6 A5;
#define s7 13;
#define s8 12;      // Right most sensor
// Initial Values of Sensors
//int sensor[8] = {0, 0, 0, 0, 0, 0, 0, 0};

// Motor Variables   //MOTOR 1= RIGHT MOTOR AND MOTOR 2= LEFT MOTOR
//MOTOR 1
#define ENA 10;
#define IN1 9;
#define IN2 8;
//MOTOR 2
#define IN3 6;
#define IN4 7;
#define ENB 5;

//Initial Speed of Motor
int initial_motor1_speed = 140;
int initial_motor2_speed = 140;
int LeftRotationSpeed=250;
int RightRotationSpeed=250;

// Output Pins for Led
//int ledPin1 = A3;     //UN-COMMENT IF NEEDED
//int ledPin2 = A4;     //UN-COMMENT IF NEEDED


void setup() {
  pinMode(s1, INPUT);
  pinMode(s2, INPUT);
  pinMode(s3, INPUT);
  pinMode(s4, INPUT);
  pinMode(s5, INPUT);
  pinMode(s6, INPUT);
  pinMode(s7, INPUT);
  pinMode(s8, INPUT);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  int sensor1=digitalRead(s1);
  int sensor2=digitalRead(s2);
  int sensor3=digitalRead(s3);
  int sensor4=digitalRead(s4);
  int sensor5=digitalRead(s5);
  int sensor6=digitalRead(s6);
  int sensor7=digitalRead(s7);
  int sensor8=digitalRead(s8);
  
  if((sensor1==1) && (sensor2==1) && (sensor3==1) && (sensor4==0) && (sensor5==0) && (sensor6==1) && (sensor7==1) && (sensor8==1))
  {
    forward();
  }

  else if((sensor1==0) && (sensor2==0) && (sensor3==0) && (sensor4==0) && (sensor5==0) && (sensor6==0) && (sensor7==0) && (sensor8==0))
  {
    Stop();
  }
  else if((sensor1==1) && (sensor2==1) && (sensor3==1) && (sensor4==1) && (sensor5==1) && (sensor6==1) && (sensor7==1) && (sensor8==1))
  {
    u_turn();
  }
  else if((sensor1==1) && (sensor2==1) && (sensor3==0) && (sensor4==0) && (sensor5==1) && (sensor6==1) && (sensor7==1) && (sensor8==1))
  {
    minute_left();
  }
  else if((sensor1==1) && (sensor2==1) && (sensor3==1) && (sensor4==1) && (sensor5==0) && (sensor6==0) && (sensor7==1) && (sensor8==1))
  {
    minute_right();
  }
  else if((sensor1==1) && (sensor2==0) && (sensor3==0) && (sensor4==0) && (sensor5==1) && (sensor6==1) && (sensor7==1) && (sensor8==1))
  {
    gradual_left();
  }
  else if((sensor1==1) && (sensor2==1) && (sensor3==1) && (sensor4==1) && (sensor5==0) && (sensor6==0) && (sensor7==0) && (sensor8==1))
  {
    gradual_right();
  }
  else if((sensor1==0) && (sensor2==0) && (sensor3==0) && (sensor4==0) && (sensor5==0) && (sensor6==1) && (sensor7==1) && (sensor8==1))
  {
    sharp_left();
  }
  else if((sensor1==1) && (sensor2==1) && (sensor3==1) && (sensor4==0) && (sensor5==0) && (sensor6==0) && (sensor7==0) && (sensor8==0))
  {
    sharp_right();
  }
}


 void forward()
 {
            digitalWrite(IN1, HIGH);
            digitalWrite(IN2, LOW);
            digitalWrite(IN3, HIGH);
            digitalWrite(IN4, LOW);
            analogWrite(ENA, initial_motor1_speed);
            analogWrite(ENB, initial_motor2_speed);
            Serial.print("forward\n");
 }

void Stop()
 {
            digitalWrite(IN1, LOW);
            digitalWrite(IN2, LOW);
            digitalWrite(IN3, LOW);
            digitalWrite(IN4, LOW);
            Serial.print("Stop\n");
           
 }

 void minute_left()
 {
             digitalWrite(IN1, HIGH);
            digitalWrite(IN2, LOW);
            digitalWrite(IN3, HIGH);
            digitalWrite(IN4, LOW);
            analogWrite(ENA, initial_motor1_speed);
            analogWrite(ENB, initial_motor2_speed);
            Serial.print("minute left\n");
 }

 void minute_right()
 {
             digitalWrite(IN1, HIGH);
            digitalWrite(IN2, LOW);
            digitalWrite(IN3, HIGH);
            digitalWrite(IN4, LOW);
            analogWrite(ENA, initial_motor1_speed);
            analogWrite(ENB, initial_motor2_speed);
            Serial.print("minute right\n");
 }

 void gradual_left()
 {
             digitalWrite(IN1, HIGH);
            digitalWrite(IN2, LOW);
            digitalWrite(IN3, HIGH);
            digitalWrite(IN4, LOW);
            analogWrite(ENA, initial_motor1_speed);
            analogWrite(ENB, initial_motor2_speed);
            Serial.print("gradual left\n");
 }

 void gradual_right()
 {
            digitalWrite(IN1, HIGH);
            digitalWrite(IN2, LOW);
            digitalWrite(IN3, HIGH);
            digitalWrite(IN4, LOW);
            analogWrite(ENA, initial_motor1_speed);
            analogWrite(ENB, initial_motor2_speed);
            Serial.print("gradual right\n");
 }

 void sharp_left()
 {
            digitalWrite(IN1, HIGH);
            digitalWrite(IN2, LOW);
            digitalWrite(IN3, HIGH);
            digitalWrite(IN4, LOW);
            analogWrite(ENA, initial_motor1_speed);
            analogWrite(ENB, initial_motor2_speed);
            Serial.print("sharp left\n");
 }

 void sharp_right()
 {
             digitalWrite(IN1, HIGH);
            digitalWrite(IN2, LOW);
            digitalWrite(IN3, HIGH);
            digitalWrite(IN4, LOW);
            analogWrite(ENA, initial_motor1_speed);
            analogWrite(ENB, initial_motor2_speed);
            Serial.print("sharp right\n");
 }
 
 void u_turn()
 {
            digitalWrite(IN1, HIGH);
            digitalWrite(IN2, LOW);
            digitalWrite(IN3, HIGH);
            digitalWrite(IN4, LOW);
            analogWrite(ENA, initial_motor1_speed);
            analogWrite(ENB, initial_motor2_speed);
            Serial.print("u turn\n");
 }
