// w TYM PRZYPADKU WARTOŚC ZOSTAJE ODWRÓCONA DO ZERA JEŚLI JEST MAKSYMALNA LUB JEŚLI JEST MINIMALNA TO MAKSYMALNA


byte licznik = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(licznik);
  licznik = licznik + 1;
  delay(100);
  
}
