int button_state = 0;

void setup() {
  // put your setup code here, to run once: 
  Serial.begin(9600);
  Serial.println("Hello, World!");

  //Telling code where to look to find pin
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(D0, OUTPUT);
  pinMode(D2, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  //Read pin D2 State
  Serial.println(digitalRead(D2));
  button_state = digitalRead(D2);
  if (button_state == 1) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(D0, HIGH);
    delay(500);
    digitalWrite(D0, LOW);
  }
  else {
    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(D0, LOW);
  }
}
