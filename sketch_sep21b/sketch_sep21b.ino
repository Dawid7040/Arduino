#define LED_TRAFFIC_GREEN 2
#define LED_TRAFFIC_ORANGE 7
#define LED_TRAFFIC_RED 8
#define LED_PWM_BLUE 9
#define FOTOREZYSTOR A2

int value = 0;
void setup() {
  Serial.begin(9600);
  pinMode(FOTOREZYSTOR, INPUT);
  pinMode(LED_TRAFFIC_GREEN, OUTPUT);
  pinMode(LED_TRAFFIC_ORANGE, OUTPUT);
  pinMode(LED_TRAFFIC_RED, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(FOTOREZYSTOR);
  if (value < 400){
    digitalWrite(LED_TRAFFIC_RED, HIGH);   
    digitalWrite(LED_TRAFFIC_ORANGE, LOW);
    digitalWrite(LED_TRAFFIC_GREEN, LOW);
  } else if (value < 800){
    digitalWrite(LED_TRAFFIC_ORANGE, HIGH);
    digitalWrite(LED_TRAFFIC_GREEN, LOW);
    digitalWrite(LED_TRAFFIC_RED, LOW);
  }
  else {
    digitalWrite(LED_TRAFFIC_GREEN, HIGH);
    digitalWrite(LED_TRAFFIC_ORANGE, LOW);
    digitalWrite(LED_TRAFFIC_RED, LOW);
  }
  

} 
