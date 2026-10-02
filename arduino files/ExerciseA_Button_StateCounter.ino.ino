const int buttonPin = 10;

int currentButtonState;
int lastButtonState;

int pressCount = 0;
int releaseCount = 0;
int totalChanges = 0;

void setup() {
  pinMode(buttonPin, INPUT);

  Serial.begin(9600);

  // Read the initial button state so it is not counted as a change.
  lastButtonState = digitalRead(buttonPin);

  Serial.println("Button monitor started.");
  Serial.println("Press or release the switch.");
}

void loop() {
  currentButtonState = digitalRead(buttonPin);

  // Run this only when the input state changes.
  if (currentButtonState != lastButtonState) {
    totalChanges++;

    if (currentButtonState == HIGH) {
      pressCount++;

      Serial.print("Button PRESSED   | Presses: ");
      Serial.print(pressCount);
      Serial.print(" | Releases: ");
      Serial.print(releaseCount);
      Serial.print(" | Total changes: ");
      Serial.println(totalChanges);
    }
    else {
      releaseCount++;

      Serial.print("Button RELEASED  | Presses: ");
      Serial.print(pressCount);
      Serial.print(" | Releases: ");
      Serial.print(releaseCount);
      Serial.print(" | Total changes: ");
      Serial.println(totalChanges);
    }

    lastButtonState = currentButtonState;
  }
}