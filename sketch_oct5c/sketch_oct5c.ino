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
  pinMode(POTENCJOMETR, INPUT);
  pinMode(LED_TRAFFIC_GREEN, OUTPUT);
  pinMode(LED_TRAFFIC_RED, OUTPUT);

}

void loop() {
  int temp = analogRead(POTENCJOMETR)/8/2;
  delay(500);
  Serial.println(temp);
  if (temp >= 25){
    digitalWrite(LED_TRAFFIC_GREEN, HIGH);
    digitalWrite(LED_TRAFFIC_RED, LOW);
  }else if (temp <= 20){
    digitalWrite(LED_TRAFFIC_GREEN, LOW);
    digitalWrite(LED_TRAFFIC_RED, HIGH);
  }
  else{
    digitalWrite(LED_TRAFFIC_GREEN, LOW);
    digitalWrite(LED_TRAFFIC_RED, LOW);
  }

}
