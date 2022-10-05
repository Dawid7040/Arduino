#define LED_TRAFFIC_GREEN 2
#define LED_TRAFFIC_RED 8

#define LED_PWM_BLUE 9
#define FOTOREZYSTOR A2

#define TERMOMETR A4
#define POTENCJOMETR A5


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(TERMOMETR, INPUT);

}

void loop() {
  int temp = analogRead(TERMOMETR);
  Serial.println(temp * 0.125 - 22);
}
