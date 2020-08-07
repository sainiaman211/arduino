int led1 = 1;
int led2 = 2;
int led3 = 3;
int led4 = 4;



void setup() {                
  // initialize the digital pin as an output.
  pinMode(led1, OUTPUT);   
  pinMode(led2, OUTPUT);  
  pinMode(led3, OUTPUT);    
  pinMode(led4, OUTPUT);
 
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for 1/2 a second
  digitalWrite(led1, LOW); 
  delay(1000); // turn the LED off by making the voltage LOW
  digitalWrite(led2, HIGH);    // turn the LED on (HIGH is the voltage level)
  delay(2000);                      // wait for 1/2 a second
  digitalWrite(led2, LOW);
  delay(2000);
  // turn the LED off by making the voltage LOW
  digitalWrite(led3, HIGH);     // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for 1/2 a second
  digitalWrite(led3, LOW); 
  delay(1000);// turn the LED off by making the voltage LOW
  digitalWrite(led4, HIGH);     // turn the LED on (HIGH is the voltage level)
  delay(2000);                      // wait for 1/2 a second
  digitalWrite(led4, LOW); 
  delay(2000); // turn the LED off by making the voltage LOW
                      
}
