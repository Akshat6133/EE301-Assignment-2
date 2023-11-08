#define T 100000


String t =  "111010110111";
int n;

void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  Serial.begin(9600);
  n = t.length();
}

void loop() {
  for(int i = 0; i<n; i++){
    if(t[i] == '1'){
    digitalWrite(8, HIGH);
    }
    else{
      digitalWrite(8, LOW);
    }
    delayMicroseconds(10);                                                                                                                                                 
       //delay(100);
  }
  //delay(100000);
}
