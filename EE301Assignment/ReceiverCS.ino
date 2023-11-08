const int ipin = 10;
const int opin = 12;
const int halfTimePeriod = 1000; //Unit: microseconds

void setup() {
  pinMode(ipin, INPUT);   
  pinMode(opin, OUTPUT); 
  Serial.begin(9600);
}
int signal;
int n = 0;
void loop() {
    delay(100);  // for seeing in oscilloscope remove the delay but to get string in serial monitor maintain this delay equal to the one at
  // Tx Side
    signal = digitalRead(ipin);
    digitalWrite(opin,signal);
    Serial.println(signal);
}
