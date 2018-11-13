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
  
  Serial.println("What's your name sir?");
  while(Serial.available()==0) {}
  myName = Serial.readString();

  Serial.println(myName + " and how old are you?");
  while(Serial.available()==0) {}
  age = Serial.parseInt();

  Serial.println("What's the height of your cilinder?");
  while(Serial.available()==0) {}
  height = Serial.parseFloat();

  Serial.println("What's the diameter of your cilinder?");
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
