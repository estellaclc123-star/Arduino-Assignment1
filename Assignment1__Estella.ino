
int startValue = 5;
int ledPin = 13;


  void flashLED( int times){
    int flash = 0;

    while (flash< times){
    digitalWrite(ledPin, HIGH);
    delay(300);
    digitalWrite(ledPin, LOW);
    delay(300);

    flash++;
    }

}



void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("=====Smart Countdown Starting====");

  int counter = startValue;
  while(counter > 0){
     Serial.print( "count is : " );
     Serial.println(counter);
     flashLED(counter);
    
    delay(1000);
    
     counter = counter - 1;
  }


  Serial.println("====Countdown Complete==== ");

     
}

void loop() {
  // put your main code here, to run repeatedly:

}
