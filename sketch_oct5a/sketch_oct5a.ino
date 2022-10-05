#define LED_TRAFFIC_GREEN 2
#define LED_TRAFFIC_RED 8

#define LED_PWM_BLUE 9
#define FOTOREZYSTOR A2

#define TERMOMETR A4
#define POTENCJOMETR A5


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_PWM_BLUE, OUTPUT);
  pinMode(FOTOREZYSTOR, INPUT);
  pinMode(POTENCJOMETR, INPUT);

}

void loop() {
  int light = analogRead(FOTOREZYSTOR)/4;
  int min = analogRead(POTENCJOMETR)/4;
  if (!=(min < light)){
    digitalWrite(LED_PWM_BLUE, HIGH);
  }else{
    digitalWrite(LED_PWM_BLUE, LOW);
  }
}
