int r1 = 10;
int y1 = 2;
int g1 = 3;
int r2 = 4;
int y2 = 5;
int g2 = 6;
int r3 = 7;
int y3 = 8;
int g3 = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(r1, OUTPUT);
  pinMode(y1, OUTPUT);
  pinMode(g1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(y2, OUTPUT);
  pinMode(g2, OUTPUT);
  pinMode(r3, OUTPUT);
  pinMode(y3, OUTPUT);
  pinMode(g3, OUTPUT);
  digitalWrite(r1, LOW);
  digitalWrite(g1, LOW);
  digitalWrite(y1, LOW);
  digitalWrite(r2, LOW);
  digitalWrite(g2, LOW);
  digitalWrite(y2, LOW);
  digitalWrite(r3, LOW);
  digitalWrite(g3, LOW);
  digitalWrite(y3, LOW);
}
  
void loop() {
  // put your main code here, to run repeatedly:
 // digitalWrite(r, HIGH);
  //delay(15000);
  //traffic1();
  //digitalWrite(r, HIGH);
  //Serial.println("loop 1 completed");
  //exit;

  digitalWrite(r2, HIGH);
  digitalWrite(r3, HIGH);
  digitalWrite(r1, LOW);
  digitalWrite(g1, HIGH);
  Serial.println("signal 1 is green ");
  delay(8000);
  digitalWrite(g1, LOW);
  digitalWrite(y1, HIGH);
  Serial.println("signal 1 is yellow");
  delay(2000);
  digitalWrite(y1, LOW);
  digitalWrite(r1, HIGH);

  
  digitalWrite(r2, LOW);
  digitalWrite(g2, HIGH);
  Serial.println("signal 2 is green ");
  delay(8000);
  digitalWrite(g2, LOW);
  digitalWrite(y2, HIGH);
  Serial.println("signal 2 is yellow");
  delay(2000);
  digitalWrite(y2, LOW);
  digitalWrite(r2, HIGH);

  digitalWrite(r3, LOW);
  digitalWrite(g3, HIGH);
  Serial.println("signal 3 is green ");
  delay(8000);
  digitalWrite(g3, LOW);
  digitalWrite(y3, HIGH);
  Serial.println("signal 3 is yellow");
  delay(2000);
  digitalWrite(y3, LOW);
  digitalWrite(r3, HIGH);
  return;
}
