int buzzer = 10; 
int ldr = 3; 
int resistenciaLdr = 0; 
 
void setup() {
  pinMode(buzzer,OUTPUT); 
  Serial.begin(9600); 
}
 
void loop() {
  resistenciaLdr = analogRead(ldr); 
 
  if (resistenciaLdr < 700) 
    digitalWrite(buzzer,HIGH);
  else 
    digitalWrite(buzzer,LOW);

  String texto = "Sensor de Luminosidade: " + resistenciaLdr;
  Serial.println(texto);
 
  delay(200);
}

