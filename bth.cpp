#include <SoftwareSerial.h> 
#include <Arduino.h>
SoftwareSerial mybt(0,1);

int read_character(){
  int c =0;
  if (mybt.available()){ 
    c = mybt.read(); 
  }
  return c;   
}

String  read_name(){
  String nameu;
  if (mybt.available()){
    nameu = mybt.readString();
  } 
  return nameu;
}

void show_text(String  t){
  mybt.println(t);
}
