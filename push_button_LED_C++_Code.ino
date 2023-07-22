// C++ code

//
int LED = 8;
int PUSH = 0;
void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(PUSH, INPUT);
}

void loop()
{
  PUSH= digitalRead (9); // Read State of Push Button
  
 if (PUSH == HIGH) 
  {
  digitalWrite(LED, HIGH);
  }
  else
  {
    digitalWrite (LED, LOW);
  }
  delay (20); //20 millisecond delay to improve the simulation
}