#define VA 2
#define M1A 3
#define M2A 4
#define VB 2
#define M1B 3
#define M2B 4
void setup() {
  pinMode(VA, OUTPUT);
  pinMode(M1A, OUTPUT);
  pinMode(M2A, OUTPUT);
  Serial.begin(9600);
  pinMode(VB, OUTPUT);
  pinMode(M1B, OUTPUT);
  pinMode(M2B, OUTPUT);
  Serial.begin(9600);
}

void loop() {
 if(Serial.available()>0){
  char valorRecebido = Serial.read();
  switch(valorRecebido){
    case 'F':
      frente();
    break; 

    case 'B':
      traz();
    break; 

    case 'R':
      viraDireita();
    break; 

    case 'L':
      viraEsquerda();
    break; 

    case 'S':
      para();
    break; 
    
  }
 }

}

void frente(){
     digitalWrite(M1A, HIGH);
     digitalWrite(M2A, LOW);
     digitalWrite(VA, 255);
     digitalWrite(M1B, LOW);
     digitalWrite(M2B, HIGH);
     digitalWrite(VB, 255);
}
void traz(){
     digitalWrite(M1A, LOW);
     digitalWrite(M2A, HIGH);
     digitalWrite(VA, 255);
     digitalWrite(M1B, LOW);
     digitalWrite(M2B, HIGH);
     digitalWrite(VB, 255);
}

void viraDireita(){
     digitalWrite(M1A, HIGH);
     digitalWrite(M2A, LOW);
     digitalWrite(VA, 255);
     digitalWrite(M1B, LOW);
     digitalWrite(M2B, HIGH);
     digitalWrite(VB, 255);
}

void viraEsquerda(){
     digitalWrite(M1A, LOW);
     digitalWrite(M2A, HIGH);
     digitalWrite(VA, 255);
     digitalWrite(M1B, LOW);
     digitalWrite(M2B, HIGH);
     digitalWrite(VB, 255);
}

void para(){
     digitalWrite(M1A, HIGH);
     digitalWrite(M2A, LOW);
     digitalWrite(VA, 255);
     digitalWrite(M1B, LOW);
     digitalWrite(M2B, HIGH);
     digitalWrite(VB, 255);
}

