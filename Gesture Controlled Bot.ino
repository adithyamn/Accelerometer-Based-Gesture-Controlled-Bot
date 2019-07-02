int lm1 = 24;
int lm2 = 25;
int rm1 = 0;
int rm2 = 1;

void forward()
{
  digitalWrite(lm1,1);
  digitalWrite(lm2,0);
  digitalWrite(rm1,1);
  digitalWrite(rm2,0);
}
void Stop()
{
  digitalWrite(lm1,0);
  digitalWrite(lm2,0);
  digitalWrite(rm1,0);
  digitalWrite(rm2,0);
}
void Reverse()
{
  digitalWrite(lm1,0);
  digitalWrite(lm2,1);
  digitalWrite(rm1,0);
  digitalWrite(rm2,1);
}
void Right()
{
  digitalWrite(lm1,1);
  digitalWrite(lm2,0);
  digitalWrite(rm1,0);
  digitalWrite(rm2,1);
}
void Left()
{
  digitalWrite(lm1,0);
  digitalWrite(lm2,1);
  digitalWrite(rm1,1);
  digitalWrite(rm2,0);
}
void setup() {
  Serial.begin(9600);
  pinMode(lm1,OUTPUT);
  pinMode(lm2,OUTPUT);
  pinMode(rm1,OUTPUT);
  pinMode(rm2,OUTPUT);
}

void loop() {
  while(!Serial.available());
  char c = Serial.read();
  Serial.println(c);
  if(c=='f')
  forward();
  if(c=='s')
  Stop();
  if(c=='R')
  Reverse();
  if(c=='l')
  Left();
  if(c=='r')
  Right();
  

}
