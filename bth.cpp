#include <SoftwareSerial.h> 
#include <Arduino.h>
SoftwareSerial mybt(0,1);

char read_character(){
  if (mybt.available()){ 
    char c = mybt.read(); 
  }
  return c;   
}

String  read_name(){
  if (mybt.available());{
    String nameu = mybt.read();
  } 
  return nameu;
}

void show_text(String  t){
  mybt.println(t);
}
