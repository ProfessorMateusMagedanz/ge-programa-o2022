
int estadobotao = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
estadobotao = digitalRead(2);
if (estadobotao == LOW){
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
}
else{
  digitalWrite(3, LOW); // apaga o LED da porta 3
digitalWrite(4, LOW); // apaga o LED da porta 4
digitalWrite(5, HIGH); // acende o LED da porta 5
delay(250); // espera 0.250 segundos
digitalWrite(4, HIGH); // acende o led da porta 4
digitalWrite(5, LOW); //apaga o led da porta 5
delay(250); //espera mais 0.250 segundos
}
}
