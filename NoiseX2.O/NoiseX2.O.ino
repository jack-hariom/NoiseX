int a=0,b=0,c=0,d=0;
int e=0;//avg
int l=515;//low
int m=525;//medium
int h=550;//high
int sensor1 = A0;
int sensor2 = A1;
int sensor3 = A2;
int sensor4 = A3;
int led1 = 10;
int led2 = 13;
int led3 = 12;
int led4 = 9;
int led5 = 3;
int led6 = 8;
int led7 = 2;
int led8 = 11;

void setup(){
pinMode(sensor1,INPUT);
pinMode(sensor2,INPUT);
pinMode(sensor3,INPUT);
pinMode(sensor4,INPUT);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(led5,OUTPUT);
pinMode(led6,OUTPUT);
pinMode(led7,OUTPUT);
pinMode(led8,OUTPUT);
Serial.begin(9600);
}

void loop(){
 digitalWrite(led8, HIGH); 
 a = analogRead(A0);
 b = analogRead(A0);
 c = analogRead(A0);
 d = analogRead(A0);
 digitalWrite(led1 ,LOW);
 digitalWrite(led2 ,LOW);
 digitalWrite(led3 ,LOW);
 digitalWrite(led4 ,LOW);
 e =(a+b+c+d)/4;
 Serial.print("Average  = ");
 Serial.println(e);
 Serial.print("Senor value 1 = ");
 Serial.println(a);
  Serial.print("Senor value 2 = ");
 Serial.println(b);
  Serial.print("Senor value 3 = ");
 Serial.println(c);
  Serial.print("Senor value 4 = ");
 Serial.println(d);
  Serial.print("Senor avarage  = ");
 Serial.println(e);
 if(a>b && a>c && a>d){
     digitalWrite(led4,HIGH);
   }
   else if(b>a && b>c && b>d){
     digitalWrite(led5,HIGH);
   }
   else if(c>a && c>b && c>d){
     digitalWrite(led6,HIGH);
   }
   else if(d>a && d>b && d>c){
     digitalWrite(led7,HIGH);
   }
   else{
     digitalWrite(led4 , LOW);
    digitalWrite(led5 , LOW);
    digitalWrite(led6 , LOW);
    digitalWrite(led7 , LOW);
   }
 
 if(e<=l){
   digitalWrite(led1 ,HIGH);
  // delay(100);
 }else if(e>l && e<=m){
   digitalWrite(led2,HIGH);
  // delay(100);
 }else if(e>m && e<=h){
   digitalWrite(led3,HIGH);
  // delay(100);

 }
   
 else{
   digitalWrite(led1 ,LOW);
 digitalWrite(led2 ,LOW);
 digitalWrite(led3 ,LOW);
 digitalWrite(led4 ,LOW);
 }
 //delay(100);
}
