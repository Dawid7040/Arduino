#define zielona 2
#define czerwona 8


boolean red = false;
boolean green = false;
String odebraneDane = "";

void setup() {
  Serial.begin(9600);
  pinMode(zielona, OUTPUT);
  pinMode(czerwona, OUTPUT);
  Serial.println("Started");

  digitalWrite(zielona, LOW);
  digitalWrite(czerwona, LOW);

}

void loop() {

  if(Serial.available() > 0) {
    
    odebraneDane = Serial.readStringUntil("\n");
    Serial.println(odebraneDane);
    if (odebraneDane == "zielona"){
      if (!red){
        digitalWrite(zielona, HIGH);
        red = true;
      }
      else {
        red = false;
      digitalWrite(zielona, LOW);
      }
    }
    else if (odebraneDane == "czerwona"){
      if (!green) {
              
        digitalWrite(czerwona, HIGH);
        green = true;
      }
      else {
        green = false;
        digitalWrite(czerwona, LOW);
      }
    }
    else{
      Serial.println("Bledny kolor");
    }
  }
}
