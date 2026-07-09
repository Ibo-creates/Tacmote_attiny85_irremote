#include <TinyIRSender.hpp>

uint32_t tRawData[] = {
    0x126CB23,
    0x7082400,
    0x8,
    0x5000
};

const int led = 2;
const int tv = 3;
const int ac = 4;
const int irled = 0; 



void setup() {
  IrSender.begin(irled);
   pinMode(led, OUTPUT);
   pinMode(ac, INPUT_PULLUP);
   pinMode(tv, INPUT_PULLUP);
   pinMode(irled, OUTPUT);

   digitalWrite(led , HIGH);
   delay(500);
   digitalWrite(led, LOW); //Indication led for on

  
  
}

void loop(){

if(digitalRead(tv) == LOW){//Tv remote power button
  while(digitalRead(tv) == LOW);
  delay(20);
  IrSender.sendSamsung(0xE, 0xC, 2); //Put your unique code here
  digitalWrite(led, HIGH);
  delay(200);
  digitalWrite(led ,LOW);
}


if(digitalRead(ac) == LOW){// Ac remote power button
  while(digitalRead(ac) == LOW);
  delay(20);
 IrSender.sendPulseDistanceWidthFromArray(//Put your unique code here
        38,                      
        3650,                   
        1500,                   
        550,                    
        1100,                   
        550,                    
        500,                    
        tRawData,
        112,                    
        PROTOCOL_IS_LSB_FIRST,
        40,                     
        2                       
    );
  digitalWrite(led, HIGH);
  delay(200);
  digitalWrite(led ,LOW);
}



}


