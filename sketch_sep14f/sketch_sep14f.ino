#define POTENCJOMETR A5
#define PRZYCISK_LEWY  12
#define PRZYCISK_SRODKOWY 11
#define PRZYCISK_PRAWY  10
#define LED_RGB_RED 5
#define LED_RGB_GREEN 3
#define LED_RGB_BLUE 6

int red_light_value = 0;
int green_light_value = 0;
int blue_light_value = 0;
int buttonstateL = 0;
int buttonstateS = 0;
int buttonstateP = 0;

int choosen = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(POTENCJOMETR, INPUT);
  pinMode(PRZYCISK_LEWY, INPUT);
  pinMode(PRZYCISK_SRODKOWY, INPUT);
  pinMode(PRZYCISK_PRAWY, INPUT);
  pinMode(LED_RGB_RED, OUTPUT);
  pinMode(LED_RGB_GREEN, OUTPUT);
  pinMode(LED_RGB_BLUE, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(POTENCJOMETR);
  sensorValue = sensorValue/4;
  buttonstateL = digitalRead(PRZYCISK_LEWY);
  buttonstateS = digitalRead(PRZYCISK_SRODKOWY);
  buttonstateP = digitalRead(PRZYCISK_PRAWY);
  
  if (buttonstateL == HIGH) {
    choosen = 1;
  }
  if (buttonstateS == HIGH) {
    choosen = 2;
  }
  if (buttonstateP == HIGH) {
    choosen = 3;
  }
  if (choosen == 1) {
    red_light_value = sensorValue;
  }
  if (choosen == 2) {
    green_light_value = sensorValue;
  }
  if (choosen == 3) {
    blue_light_value = sensorValue;
  }
  RGB_color();


}

void RGB_color()
 {
  analogWrite(LED_RGB_RED, red_light_value);
  analogWrite(LED_RGB_GREEN, green_light_value);
  analogWrite(LED_RGB_BLUE, blue_light_value);
}
