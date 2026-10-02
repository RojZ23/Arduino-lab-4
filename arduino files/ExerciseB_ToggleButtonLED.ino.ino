const int buttonPin = 10;  // Pushbutton input pin
const int ledPin = 5;      // External LED output pin

int ledState = LOW;
int buttonState = LOW;
int lastButtonState = LOW;

unsigned long lastDebounceTime = 0;
const unsigned long debounceDelay = 50;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);

  digitalWrite(ledPin, ledState);
}

void loop() {
  int reading = digitalRead(buttonPin);

  // If the reading changed, reset the debounce timer.
  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }

  // Accept a new button state only after it has been stable for 50 ms.
  if ((millis() - lastDebounceTime) > debounceDelay) {

    // Detect a new stable state.
    if (reading != buttonState) {
      buttonState = reading;

      // Toggle once only when the button changes from LOW to HIGH.
      if (buttonState == HIGH) {
        ledState = !ledState;
        digitalWrite(ledPin, ledState);
      }
    }
  }

  lastButtonState = reading;
}