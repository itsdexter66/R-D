String myName;
int age;
float height;
float diameter;
float pi = 3.14;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  Serial.println("Wat is je naam?");
  while(Serial.available()==0) {}
  myName = Serial.readString();

  Serial.println("en hoe oud ben je " + myName + " ?");
  while(Serial.available()==0) {}
  age = Serial.parseInt();

  Serial.println("Wat is de hoogte van je cilinder?");
  while(Serial.available()==0) {}
  height = Serial.parseFloat();

  Serial.println("Wat is de diameter van je cilinder?");
  while(Serial.available()==0) {}
  diameter = Serial.parseFloat();

  calcVolume(height, diameter);
}

void calcVolume(float height, float diameter) {
  float r = diameter / 2;
  float volume = (pi * (r * r) * height);
  Serial.println(String("The volume of your cilinder is: ") + volume + String(" cm3."));
  delay(1000);
}
