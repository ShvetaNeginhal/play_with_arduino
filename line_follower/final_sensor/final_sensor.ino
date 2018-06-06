int a=6, b=7 ,c=10, d=11, x=5, y=9;
float m,n;
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
 m =analogRead(0);
 n=analogRead(2);
//if (Serial.available()>0)
//{
 //ch=Serial.read();
 //Serial.println(ch);
 //if(ch=='i')

if(n>150 & m<150)
{
digitalWrite(a,HIGH); digitalWrite(b,LOW); digitalWrite(c,LOW);digitalWrite(d,HIGH); //right
}
else if(m>150 & n<150)
{
digitalWrite(a,LOW); digitalWrite(b,HIGH); digitalWrite(c,HIGH);digitalWrite(d,LOW);//left
}
else if(m<150 & n<150)
{
digitalWrite(a,HIGH); digitalWrite(b,LOW); digitalWrite(c,HIGH);digitalWrite(d,LOW); //forward
}
else 
{
  digitalWrite(a,LOW); digitalWrite(b,LOW); digitalWrite(c,LOW);digitalWrite(d,LOW); //stop
}
}

  

