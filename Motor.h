const int freq = 5000;
const int resolution = 8;

void motorInit(){
  pinMode(EnA, OUTPUT);
  pinMode(In1, OUTPUT);
  pinMode(In2, OUTPUT);
  pinMode(In3, OUTPUT);
  pinMode(In4, OUTPUT);
  pinMode(EnB, OUTPUT);

  ledcAttach(EnA, freq, resolution);
  ledcAttach(EnB, freq, resolution);
}

void maju(){
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  digitalWrite(In3, LOW);
  digitalWrite(In4, HIGH);

  ledcWrite(EnA, 255);
  ledcWrite(EnB, 255);
}