int a=6, b=7 ,c=10, d=11 ,x=5,y=9;
int ch=0;//ports
void setup() {
  // put your setup code here, to run once:
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
 // pinMode(x,OUTPUT);
  //pinMode(y,OUTPUT);
  Serial.begin(9600);
  Serial.println("                                     Credence robotics presents");
  Serial.println();
  Serial.println("                                              TEAM $$");
}
void loop() {
  // put your main code here, to run repeatedly:
// digitalWrite(m,LOW); //buzzer 

if (Serial.available()>0)
{
 ch=Serial.read();
 Serial.println(ch);
 if(ch=='i')
{
digitalWrite(a,HIGH); digitalWrite(b,LOW); digitalWrite(c,HIGH);digitalWrite(d,LOW);delay(2000); //forward
}
else if(ch=='l')
{
digitalWrite(a,HIGH); digitalWrite(b,LOW); digitalWrite(c,LOW);digitalWrite(d,LOW); delay(2000);//right
}
else if(ch=='j')
{
digitalWrite(a,LOW); digitalWrite(b,LOW); digitalWrite(c,HIGH);digitalWrite(d,LOW); delay(2000);//left
}
else if(ch=='k')
{
digitalWrite(a,LOW); digitalWrite(b,HIGH); digitalWrite(c,LOW);digitalWrite(d,HIGH); delay(2000);
  }
else 
{
  digitalWrite(a,LOW); digitalWrite(b,LOW); digitalWrite(c,LOW);digitalWrite(d,LOW); //stop
}
}
}
  

