#include <Arduino.h> 
#include "bth.h" 
#include "frames.h"

String intro(){
  Serial.println("dialogos de introducción1");
  show_text("dialogos de introducción2");
  show_text("Ingresa tu nombre!!");
  String  user = read_name();
  String  text("Bienvenid@ ");
  show_text(user);
  return user ;

}

int situation1(String n){
  show_text("Hola de nuevo " );
  show_text(n);
  show_text("Contexto");
  show_text("Problematica");
  show_text("dialogo mf");
  show_text("dialogo srr");
  show_text("Pregunta"); 
  show_text(" 1, 2, 3, 4");
  int option = read_character();
  show_text("Elegiste" + option);
  return option;
  
}   
int situation2(String n){
  show_text("Hola de nuevo");
  show_text(n);
  show_text("Contexto");
  show_text("Problematica");
  show_text("dialogo urtnk");
  show_text("dialogo skt");
  show_text("dialogo mf");
  show_text("dialogo srr");  
  show_text("Pregunta"); 
  show_text(" 1, 2, 3, 4");
  int option = read_character();
  show_text("Elegiste" + option);
  return option;    
}

int situation3(String n){
  show_text("Hola de nuevo ");
  show_text(n);
  show_text("Contexto");
  show_text("Problematica");
  show_text("dialogo urtnk");
  show_text("dialogo skt");
  show_text("dialogo urtnk");
  show_text("dialogo skt");
  show_text("dialogo urtnk");
  show_text("dialogo skt");
  show_text("dialogo mf");
  show_text("dialogo srr");   
  show_text("Pregunta"); 
  show_text(" 1, 2, 3, 4");
  int option = read_character();
  show_text("Elegiste" + option);    
}

void common_ending(String n){

}

int mfmf_route(String n){
  show_text("MF- Hola ");
  show_text(n);
  show_text("Contexto");
  show_text("Problematica");
  show_text("dialogo urtnk");
  show_text("dialogo skt");
  show_text("dialogo mf");
  show_text("dialogo srr");  
  show_text("Pregunta"); 
  show_text(" A, B");
  int option = read_character();
  return option;    
}

int srr_route(String  n){
  show_text("Sr- Hola ");
  show_text(n);
  show_text("Contexto");
  show_text("Problematica");
  show_text("dialogo urtnk");
  show_text("dialogo skt");
  show_text("dialogo mf");
  show_text("dialogo srr");  
  show_text("Pregunta"); 
  show_text(" A, B");
  int option = read_character();
  return option;    
}

int urtnk_route(String  n){
  show_text("Urtnk- Hola ");
  show_text(n);
  show_text("Contexto");
  show_text("Problematica");
  show_text("dialogo urtnk");
  show_text("dialogo skt");
  show_text("dialogo mf");
  show_text("dialogo srr");  
  show_text("Pregunta"); 
  show_text(" A, B");
  int option = read_character();
  return option;    
}

int skt_route(String  n){
  show_text("Skt- Hola ");
  show_text(n);
  show_text("Contexto");
  show_text("Problematica");
  show_text("dialogo urtnk");
  show_text("dialogo skt");
  show_text("dialogo mf");
  show_text("dialogo srr");  
  show_text("Pregunta"); 
  show_text(" A, B");
  int option = read_character();
  return option;      
}

void mfmf_gEnd(String  n){
  show_text("G end Mafu");
}

void srr_gEnd(String  n){
  show_text("G end Sora");
}

void urtnk_gEnd(String  n){
  show_text("G end Ura");
}

void skt_gEnd(String  n){
  show_text("G end Saka");  
}

void mfmf_bEnd(String  n){
  show_text("B end Mafu");
}

void srr_bEnd(String  n){
  show_text("B end Sora");
}

void urtnk_bEnd(String  n){
  show_text("B end Ura");
}

void skt_bEnd(String  n){
  show_text("B end Saka");  
}
