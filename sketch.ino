int G1 = 1;
int Y1 = 2;
int R1 = 3;
int G2 = 4;
int Y2 = 5;
int R2 = 6;
int G3 = 7;
int Y3 = 8;
int R3 = 9;
int G4 = 10;
int Y4 = 11;
int R4 = 12;

void setup() {
  pinMode(G1, OUTPUT);
  pinMode(Y1, OUTPUT);
  pinMode(R1, OUTPUT);
  pinMode(G2, OUTPUT);
  pinMode(Y2, OUTPUT);
  pinMode(R2, OUTPUT);
  pinMode(G3, OUTPUT);
  pinMode(Y3, OUTPUT);
  pinMode(R3, OUTPUT);
  pinMode(G4, OUTPUT);
  pinMode(Y4, OUTPUT);
  pinMode(R4, OUTPUT);
  digitalWrite(R1, HIGH);
  digitalWrite(R2, HIGH);
  digitalWrite(R3, HIGH);
  digitalWrite(R4, HIGH);

}

void loop() {
  //jalan 1
  digitalWrite(R1, LOW);
  digitalWrite(Y1, HIGH);
  delay(500);
  digitalWrite(Y1, LOW);
  digitalWrite(G1, HIGH);
  delay(2500);
  digitalWrite(G1, LOW);
  digitalWrite(Y1, HIGH);
  delay(500);
  digitalWrite(Y1, LOW);
  digitalWrite(R1, HIGH);

  //jalan 2
  digitalWrite(R2, LOW);
  digitalWrite(Y2, HIGH);
  delay(500);
  digitalWrite(Y2, LOW);
  digitalWrite(G2, HIGH);
  delay(2500);
  digitalWrite(G2, LOW);
  digitalWrite(Y2, HIGH);
  delay(500);
  digitalWrite(Y2, LOW);
  digitalWrite(R2, HIGH);

  //jalan 3
  digitalWrite(R3, LOW);
  digitalWrite(Y3, HIGH);
  delay(500);
  digitalWrite(Y3, LOW);
  digitalWrite(G3, HIGH);
  delay(2500);
  digitalWrite(G3, LOW);
  digitalWrite(Y3, HIGH);
  delay(500);
  digitalWrite(Y3, LOW);
  digitalWrite(R3, HIGH);

  //jalan 4
  digitalWrite(R4, LOW);
  digitalWrite(Y4, HIGH);
  delay(500);
  digitalWrite(Y4, LOW);
  digitalWrite(G4, HIGH);
  delay(2500);
  digitalWrite(G4, LOW);
  digitalWrite(Y4, HIGH);
  delay(500);
  digitalWrite(Y4, LOW);
  digitalWrite(R4, HIGH);

}
