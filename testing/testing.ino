#define s1 A0     // Left most sensor
#define s2 A1
#define s3 A2
#define s4 A3      
#define s5 A4
#define s6 A5
#define s7 13
#define s8 12      // Right most sensor
#define high 1
void setup() {
  pinMode(s1, INPUT);
  pinMode(s2, INPUT);
  pinMode(s3, INPUT);
  pinMode(s4, INPUT);
  pinMode(s5, INPUT);
  pinMode(s6, INPUT);
  pinMode(s7, INPUT);
  pinMode(s8, INPUT);
  Serial.begin(9600);
}

void loop() {
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
    Serial.println("forward");
  }

  else if((sensor1==0) && (sensor2==0) && (sensor3==0) && (sensor4==0) && (sensor5==0) && (sensor6==0) && (sensor7==0) && (sensor8==0))
  {
    Serial.println("Stop");
  }
  else if((sensor1==1) && (sensor2==1) && (sensor3==1) && (sensor4==1) && (sensor5==1) && (sensor6==1) && (sensor7==1) && (sensor8==1))
  {
    Serial.println("Stop");
  }
  else if((sensor1==1) && (sensor2==1) && (sensor3==0) && (sensor4==0) && (sensor5==1) && (sensor6==1) && (sensor7==1) && (sensor8==1))
  {
    Serial.println("minute left");
  }
  else if((sensor1==1) && (sensor2==1) && (sensor3==1) && (sensor4==1) && (sensor5==0) && (sensor6==0) && (sensor7==1) && (sensor8==1))
  {
    Serial.println("minute right");
  }
  else if((sensor1==1) && (sensor2==0) && (sensor3==0) && (sensor4==0) && (sensor5==1) && (sensor6==1) && (sensor7==1) && (sensor8==1))
  {
    Serial.println("gradual left");
  }
  else if((sensor1==1) && (sensor2==1) && (sensor3==1) && (sensor4==1) && (sensor5==0) && (sensor6==0) && (sensor7==0) && (sensor8==1))
  {
    Serial.println("gradual right");
  }
  else if((sensor1==0) && (sensor2==0) && (sensor3==0) && (sensor4==0) && (sensor5==0) && (sensor6==1) && (sensor7==1) && (sensor8==1))
  {
    Serial.println("sharp left");
  }
  else if((sensor1==1) && (sensor2==1) && (sensor3==1) && (sensor4==0) && (sensor5==0) && (sensor6==0) && (sensor7==0) && (sensor8==0))
  {
    Serial.println("Sharp right");
  }
  /*if(sensor1==high)
    Serial.println("1");
    
  else if(sensor2==high)
    Serial.println("2");

  else if(sensor3==high)
    Serial.println("3");

  else if(sensor4==high)
    Serial.println("4");

  else if(sensor5==high)
    Serial.println("5");

  else if(sensor6==high)
    Serial.println("6");

  else if(sensor7==high)
    Serial.println("7");

  else if(sensor8==high)
    Serial.println("8");*/
}
