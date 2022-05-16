int ou_pin = 11;
int in_pin = A0;

void setup()
{
  pinMode(ou_pin,OUTPUT);
  pinMode(in_pin, INPUT) ;
  Serial.begin(9600);// Begin serial communication between arduino and computer
}

void loop()
{
 int r = analogRead(in_pin); // read voltage on A0
 int mapped = map(r,0,1023,0,255); 
 analogWrite(ou_pin,mapped);
 Serial.print("Analog read voltage: ");
 Serial.println(r);      
 Serial.print("Analog Write voltage on pin 11: ");
 Serial.println(mapped);
 delay(1000);
   
}
