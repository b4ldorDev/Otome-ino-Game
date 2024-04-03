#include <SoftwareSerial.h> 
#include <Arduino.h>
SoftwareSerial miBT();
char c = 0;
String nameu = "";
void setup(){
  mybt.begin(9600); 
}

void read_character(){
  if (mybt.available()){
   c = mybt.read(); 
   }
   return c;   
}

void read_name(){
   if (mybt.available());{
   nameu = mibt.read();
   } 
   return nameu;
}

void show_text(t){
  mybt.println(t);
}
