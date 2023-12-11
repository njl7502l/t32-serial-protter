void setup(){
  Serial.begin(921600);
}

int i = 1;

void loop(){
  if (i>100) {
    i = 0;
  }else{
    i++;
  }
  
  Serial.print(i);
  Serial.println("\thello.");
  delayMicroseconds(10);
}