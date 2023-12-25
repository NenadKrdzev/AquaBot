const int motor=3; //pin for pump
const int waitTime=1; //time that the sensor waits to scan the moisture
const int wateringTime=2; //time that the pump works for
void setup() {
 Serial.begin(9600); // initialize serial communication
 pinMode(motor,OUTPUT);// initialize the pump
}
void loop() {
 int moistureVal = analogRead(A0); // read the input on analog pin 0:
 Serial.println(moistureVal); // print out the analog val
 delay(3000);
 if(moistureVal>450){ //if the moisture is above 450 the motor starts working
 digitalWrite(motor,LOW); //turning on the pump
 delay(wateringTime*500); //it works for 1 second,but it can be changed in the variable 'wateringTime'

 }
 else{//if the mositure is below 450 the motor doesn't turn on.
 digitalWrite(motor,HIGH);//turning off the pump
 delay(waitTime*1000);//it waits for 1 second,but it can be changed in the variable 'waitTime'
 }
}
