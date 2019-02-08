const int PWMPin = 2; //pwm pin
const int analogPin = A0; //analog input


int PWMvalue; //pwm output shown
int AnalogValue; //analog input shown
int detect; //detect read

void setup() {
  Serial.begin(9600);
  pinMode(PWMPin, OUTPUT);
}

void loop() {

AnalogValue = analogRead(analogPin);

detect = analogRead(A2);

PWMvalue = map(AnalogValue, 0, 1023, 0, 255);

analogWrite(PWMPin, PWMvalue);

Serial.print("AnalogValue = ");
Serial.print(AnalogValue);
Serial.print("\t PWMvalue = ");
Serial.print(PWMvalue);
Serial.print("\t A3_read = ");
Serial.print(detect);
Serial.print("\n");

delay(1000);
}
