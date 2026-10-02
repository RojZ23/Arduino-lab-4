const int buttonPin = 10;
const int ledPin = LED_BUILTIN;

void setup() {
  pinMode(buttonPin, INPUT);   // Button circuit uses external pull-down resistor
  pinMode(ledPin, OUTPUT);     // Built-in LED
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);  // Button pressed: LED on
  } 
  else {
    digitalWrite(ledPin, LOW);   // Button released: LED off
  }
}