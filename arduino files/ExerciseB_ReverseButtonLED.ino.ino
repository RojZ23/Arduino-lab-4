const int buttonPin = 10;  // Pushbutton input pin
const int ledPin = 5;      // External LED output pin

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(ledPin, LOW);   // Button pressed: LED off
  }
  else {
    digitalWrite(ledPin, HIGH);  // Button released: LED on
  }
}