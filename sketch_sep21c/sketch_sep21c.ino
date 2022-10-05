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
  delay(200);
  if (value < 400){
    Serial.println(300);
  } else if (value < 800){
    Serial.println(700);
  }
  else {
    Serial.println(1000);
  }

} 
