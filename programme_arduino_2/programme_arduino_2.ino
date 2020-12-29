#define RELAY_ON 0
#define RELAY_OFF 1
#define RELAY_1  13

char d = 0;
void setup() {
// Set pin as output.
pinMode(RELAY_1, OUTPUT);
// Initialize RELAY1 = off. So that on reset it would be off by default
digitalWrite(RELAY_1, RELAY_OFF);

Serial.begin(9600);

Serial.print("Type: 1 to turn on the bulb. 0 to turn it off!");

}

void loop() {

 if (Serial.available() > 0) {

d = Serial.read();      //Read the incoming d and store it into variable d

  Serial.print(d);        //Print Value inside d in Serial monitor

Serial.print("\n");        //New line

if(d == '1'){

digitalWrite(RELAY_1, RELAY_ON);

Serial.println("Bulb is now turned ON.");

}

else if(d == '0'){

digitalWrite(RELAY_1, RELAY_OFF);

 Serial.println("Bulb is now turned OFF.");

}

}

}
