/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}


void loop() {

  D (); 
  ZZ ();
  L ();
  ZZ ();
  Vier ();
  ZZ ();
  Y ();
  ZZ ();
  X ();
  
 
  delay (2000);
  
}

void Punkt () {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(200);               // wait for a second
  
}

void Strich () {
  


digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(600);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(200);               // wait for a second
 
}

void Pause () {
  
 delay (600);
}

void D () {
  Strich (); 
  Punkt ();
  Punkt ();
  
}

void L () {
  Punkt ();
  Strich ();
  Punkt ();
  Punkt ();
}


void Vier () {
  Punkt ();
  Punkt ();
  Punkt ();
  Punkt ();
  Strich ();
}


void Y () {
  Strich ();
  Punkt ();
  Strich ();
  Strich (); 
}

void X () {
  Strich ();
  Punkt ();
  Punkt ();
  Strich ();
}

void ZZ () {
  Pause ();
}

