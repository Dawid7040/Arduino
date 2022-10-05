#define LED_TRAFFIC_GREEN 2
#define LED_TRAFFIC_ORANGE 7
#define LED_TRAFFIC_RED 8
#define LED_PWM_BLUE 9
#define FOTOREZYSTOR A2

int value = 0;
void setup() {
  Serial.begin(9600);
  pinMode(FOTOREZYSTOR, INPUT);
  pinMode(LED_PWM_BLUE, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(FOTOREZYSTOR);
  analogWrite(LED_PWM_BLUE, value/4);
  Serial.println(value);

} 
