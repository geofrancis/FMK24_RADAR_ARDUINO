void setup() {

  Serial1.begin(57600); // FC
  Serial.begin(115200);
}

void loop() {
   while (Serial1.available() > 0)
  {
    data1 = Serial1.parseInt(); //dataIn now holds 0
    data2 = Serial1.parseInt(); //dataIn now holds 0

    Serial.print(data1);
    Serial.print(":");
    Serial.println(data2);

}
