// Relay closes when button w/ debounce is pushed.

// button is connected to pin 2 and GND
// pin 2 is defined as HIGH until button pushed
// pin 8 to Relay pin S

const int buttonPin = 2;
const int relayPin = 8;

int buttonState = 0;
int lastButtonState = LOW;

unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;


void setup() {
  // put your setup code here, to run once:
pinMode(buttonPin, INPUT_PULLUP);
pinMode(relayPin, OUTPUT);
}

void loop() {
  buttonState= digitalRead(buttonPin);

  if (buttonState != lastButtonState) {
    lastDebounceTime = millis(); 
  }  

  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (buttonState == LOW) {          //button is pushed
      digitalWrite(relayPin, HIGH);
    } else {                           //button not pushed
      digitalWrite(relayPin, LOW);
    }
  }
  lastButtonState = buttonState;
}
