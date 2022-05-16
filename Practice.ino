

void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(A5,OUTPUT);
pinMode(2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:


   digitalWrite(13,HIGH);
   delay(1000);
  
   digitalWrite(13,LOW);
   delay(1000);
  
   digitalWrite(A5,HIGH);
   delay(1000);
   digitalWrite(A5,LOW);
   delay(1000);
  
   digitalWrite(2,HIGH);
   delay(1000);
   digitalWrite(2,LOW);
   delay(1000);
 
 

}
