int licznik = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int licznik = 0;
  Serial.println(licznik);
  licznik = licznik + 1;
  delay(100);
  
}

// Wartość zawszę będzie zerem ponieważ jest ciągle tworzona odnowa
