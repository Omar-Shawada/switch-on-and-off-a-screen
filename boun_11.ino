int led=9;
int pb=10;
int reading=0;
int counter=0;
void setup(){
  pinMode(led,OUTPUT);
  pinMode(pb,INPUT);
}
void loop(){
  reading=digitalRead(pb);
  if(reading==HIGH){
    counter++;
    if(counter==1){
      digitalWrite(led,HIGH);
    }
    else
    {digitalWrite(led,LOW);
     counter=0;}
    delay(250);}}