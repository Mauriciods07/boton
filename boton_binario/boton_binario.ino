int estado = 0;
int salida = 0;
int estadoAnterior = 0;
int cont = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(8, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  estado = digitalRead(8);
  delay(20);
  
  if ((estado == HIGH) && (estadoAnterior == LOW)){
    cont++;
    if (cont > 4){
      cont = 1;
    }
  }
  estadoAnterior = estado;

  switch(cont){
    case 1:
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      break;
    case 2:
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      break;
    case 3:
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      break;
    case 4:
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      break;
  delay(100);
  }
  
}
