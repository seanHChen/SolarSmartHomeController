// Sean C LDR + 3LED Tester Project 6/18/2018
// initialize the input value integer
int intputValue;

// label the input for the LDR (A0)
int photoResistorPin = A0;

// define the pin numbers for the three LED's
int darknessPin = 2; // the LED for dark light levels is located at pin 4
int mediumPin = 3; // the LED for medium light levels is located at pin 3
int brightPin = 4; // the LED for bright light levels is located at pin 2

void setup() {
  // sets up the program before running
  // label all the pins as output pins
  pinMode(darknessPin,OUTPUT); // pin 4 is output
  pinMode(mediumPin,OUTPUT); // pin 3 is output
  pinMode(brightPin, OUTPUT); // pin 2 is output
}

void loop(){
  // Arduino loops through this code when running
  intputValue = analogRead(photoResistorPin); // sets inputValue as the photoresistor level. 
  if(intputValue < 40){    
    // if the input level (photoResistor level) is less than 50, the LED representing darkness will turn on        
    digitalWrite(darknessPin, HIGH); 
  }
  else if(intputValue >= 40 && intputValue <= 80){
    // if the input level is between 50 and 80, then the LED representing medium light levels will turn on
    digitalWrite(mediumPin, HIGH);
  }
  else{
    // if the input level doesn't match the previous paremeters (if it's too high) then the LED representing brightness will turn on
    digitalWrite(brightPin, HIGH);
  }

  delay(200); // delays the program 200 milliseconds

  // turns off all the pins
  digitalWrite(brightPin, LOW); 
  digitalWrite(mediumPin, LOW);
  digitalWrite(darknessPin, LOW);
}
