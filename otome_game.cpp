#include <Arduino.h> 
#include "bth.h" 
#include "frames.h"

String intro(){
  Serial.println("dialogos de introducción1");
  Serial.println("dialogos de introducción2");
  Serial.println("Ingresa tu nombre!!");
  String  user = read_name();
  String  text("Bienvenid@ ");
  Serial.println(user);
  return user ;

}

int situation1(String n){
  Serial.println("Hola de nuevo " );
  Serial.println(n);
  Serial.println("Contexto");
  Serial.println("Problematica");
  Serial.println("dialogo mf");
  Serial.println("dialogo srr");
  Serial.println("Pregunta"); 
  Serial.println(" 1, 2, 3, 4");
  int option = read_character();
  Serial.println("Elegiste" + option);
  return option;
  
}   
int situation2(String n){
  Serial.println("Hola de nuevo");
  Serial.println(n);
  Serial.println("Contexto");
  Serial.println("Problematica");
  Serial.println("dialogo urtnk");
  Serial.println("dialogo skt");
  Serial.println("dialogo mf");
  Serial.println("dialogo srr");  
  Serial.println("Pregunta"); 
  Serial.println(" 1, 2, 3, 4");
  int option = read_character();
  Serial.println("Elegiste" + option);
  return option;    
}

int situation3(String n){
  Serial.println("Hola de nuevo ");
  Serial.println(n);
  Serial.println("Contexto");
  Serial.println("Problematica");
  Serial.println("dialogo urtnk");
  Serial.println("dialogo skt");
  Serial.println("dialogo urtnk");
  Serial.println("dialogo skt");
  Serial.println("dialogo urtnk");
  Serial.println("dialogo skt");
  Serial.println("dialogo mf");
  Serial.println("dialogo srr");   
  Serial.println("Pregunta"); 
  Serial.println(" 1, 2, 3, 4");
  int option = read_character();
  Serial.println("Elegiste" + option);    
}

void common_ending(String n){

}

int mfmf_route(String n){
  Serial.println("MF- Hola ");
  Serial.println(n);
  Serial.println("Contexto");
  Serial.println("Problematica");
  Serial.println("dialogo urtnk");
  Serial.println("dialogo skt");
  Serial.println("dialogo mf");
  Serial.println("dialogo srr");  
  Serial.println("Pregunta"); 
  Serial.println(" A, B");
  int option = read_character();
  return option;    
}

int srr_route(String  n){
  Serial.println("Sr- Hola ");
  Serial.println(n);
  Serial.println("Contexto");
  Serial.println("Problematica");
  Serial.println("dialogo urtnk");
  Serial.println("dialogo skt");
  Serial.println("dialogo mf");
  Serial.println("dialogo srr");  
  Serial.println("Pregunta"); 
  Serial.println(" A, B");
  int option = read_character();
  return option;    
}

int urtnk_route(String  n){
  Serial.println("Urtnk- Hola ");
  Serial.println(n);
  Serial.println("Contexto");
  Serial.println("Problematica");
  Serial.println("dialogo urtnk");
  Serial.println("dialogo skt");
  Serial.println("dialogo mf");
  Serial.println("dialogo srr");  
  Serial.println("Pregunta"); 
  Serial.println(" A, B");
  int option = read_character();
  return option;    
}

int skt_route(String  n){
  Serial.println("Skt- Hola ");
  Serial.println(n);
  Serial.println("Contexto");
  Serial.println("Problematica");
  Serial.println("dialogo urtnk");
  Serial.println("dialogo skt");
  Serial.println("dialogo mf");
  Serial.println("dialogo srr");  
  Serial.println("Pregunta"); 
  Serial.println(" A, B");
  int option = read_character();
  return option;      
}

void mfmf_gEnd(String  n){
  Serial.println("G end Mafu");
}

void srr_gEnd(String  n){
  Serial.println("G end Sora");
}

void urtnk_gEnd(String  n){
  Serial.println("G end Ura");
}

void skt_gEnd(String  n){
  Serial.println("G end Saka");  
}

void mfmf_bEnd(String  n){
  Serial.println("B end Mafu");
}

void srr_bEnd(String  n){
  Serial.println("B end Sora");
}

void urtnk_bEnd(String  n){
  Serial.println("B end Ura");
}

void skt_bEnd(String  n){
  Serial.println("B end Saka");  
}
