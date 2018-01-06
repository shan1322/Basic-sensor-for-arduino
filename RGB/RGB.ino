int r=4;
int g=3;
int b=2;
void setup() {
 pinMode(r,OUTPUT);
 pinMode(g,OUTPUT);pinMode(b,OUTPUT);
 // put your setup code here, to run once:

}

void loop() 
{

  digitalWrite(r,HIGH);
  delay(1000);
  digitalWrite(g,HIGH);
   digitalWrite(r,LOW);
  delay(1000);
   digitalWrite(b,HIGH);
    digitalWrite(r,LOW);
     digitalWrite(g,LOW);
   
 

}
