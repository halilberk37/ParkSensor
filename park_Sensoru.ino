int echoPin=9;
int trigPin=8;
int led[]= {2,3,4,5};
int buzzer= 6;
void setup() {
Serial.begin(9600);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(buzzer,OUTPUT);
}

void loop() {
int sure,mesafe,yakinlik;
digitalWrite(trigPin,LOW);
delayMicroseconds(2);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);

sure = pulseIn(echoPin,HIGH);
mesafe = (sure/2)/29.1;
Serial.print("mesafe: ");
Serial.println(mesafe);
yakinlik = map(mesafe,0,100,1,4);
Serial.print("yakinlik: ");
Serial.println(yakinlik);
for(int i= 0;i<4;i++){
  digitalWrite(led[i],LOW);
}
for(int i = 0;i<yakinlik;i++){
  digitalWrite(led[i],HIGH);
}
  digitalWrite(buzzer,HIGH);
  delay(100*yakinlik);
  digitalWrite(buzzer,LOW);
  delay (100*yakinlik);
 
}
