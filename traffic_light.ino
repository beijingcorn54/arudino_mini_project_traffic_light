int red = 53; // pin 53
int yellow = 51; // pin 51
int green = 49; // pin 49
int standardWait = 10000; // in milliseconds
int flashWait = 500;

void setup(){
  
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green,  OUTPUT);
  
}
void loop(){
digitalWrite(green, HIGH);
delay(standardWait);
digitalWrite(green,  LOW);

for(int i = 0; i < 10; i++){
  digitalWrite(yellow, HIGH);
  delay(flashWait);
  digitalWrite(yellow, LOW);
  if(i != 9){
    delay(flashWait);
  }
}
  
digitalWrite(red, HIGH);
delay(standardWait);
digitalWrite(red, LOW);
delay(flashWait);
  
}