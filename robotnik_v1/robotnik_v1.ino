int IN1 = 2;
int IN2 = 3;
int IN3 = 4;
int IN4 = 5;

void setup() {
  pinMode(IN1, OUTPUT);

  pinMode(IN2, OUTPUT);

  pinMode(IN3, OUTPUT);
  
  pinMode(IN4, OUTPUT);
}
 
void loop() { 
  frente();

  direita();

  parar();

  re();

  esquerda();
}

void frente(){
  digitalWrite(IN2,1);
  digitalWrite(IN1,0);
  digitalWrite(IN3,1);
  digitalWrite(IN4,0);
  delay(3000);
}

void re(){
  digitalWrite(IN2,0);
  digitalWrite(IN1,1);
  digitalWrite(IN3,0);
  digitalWrite(IN4,1);
  delay(3000); 

} void parar(){
  digitalWrite(IN2,0);
  digitalWrite(IN1,0);
  digitalWrite(IN3,0);
  digitalWrite(IN4,0);
  delay(6000);
}

void direita(){
  digitalWrite(IN2,1);
  digitalWrite(IN1,0);
  digitalWrite(IN3,0);
  digitalWrite(IN4,0);
  delay(1000);
}

void esquerda(){
  digitalWrite(IN2,0);
  digitalWrite(IN1,0);
  digitalWrite(IN3,1);
  digitalWrite(IN4,0);
  delay(1000);
}
