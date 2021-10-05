void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(13,INPUT);
ledcSetup(0,5000,8);
ledcAttachPin(14,0);
}

void loop() {
  // put your main code here, to run repeatedly:
int input=analogRead(13);
int inputmap=map(input,0,595,255,0);
ledcWrite(0,inputmap);
Serial.println(inputmap);
}
