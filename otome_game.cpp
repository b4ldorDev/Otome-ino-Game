#include <Arduino.h> 
#include "bth.h" 
#include "frames.h"

void intro(){
  show_text("dialogos de introducción1");
  show_text("dialogos de introducción2");
  show_text("Ingresa tu nombre!!");
  String user = read_name();
  String = text("Bienvenid@ ");
  show_test( text + user); 
  return user ;

}

void situation1(String n){
  show_text("Hola de nuevo " + n);
  show_text("Contexto");
  show_text("Problematica");
  show_text("dialogo mf");
  show_text("dialogo srr");
  show_text("Pregunta"); 
  show_text(" A, B, C, D");
  option = read_character();
  show_text("Elegiste" + option);
  return option;
  
}   

void situation2(String n){
  show_text("Hola de nuevo", n);
  show_text("Contexto");
  show_text("Problematica");
  show_text("dialogo urtnk");
  show_text("dialogo skt");
  show_text("dialogo mf");
  show_text("dialogo srr");  
  show_text("Pregunta"); 
  show_text(" A, B, C, D");
  option = read_character();
  show_text("Elegiste" + option);
  return option;    
}

void situation3(String n){
  show_text("Hola de nuevo", n);
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
  show_text(" A, B, C, D");
  option = read_character();
  show_text("Elegiste" + option);    
}

void common_ending(){

}

void mfmf_route(String n){
  show_text("MF- Hola", n);
  show_text("Contexto");
  show_text("Problematica");
  show_text("dialogo urtnk");
  show_text("dialogo skt");
  show_text("dialogo mf");
  show_text("dialogo srr");  
  show_text("Pregunta"); 
  show_text(" A, B");
  option = read_character();
  show_text("Elegiste" + option);
  return option;    

}

void srr_route(){

}

void urtnk_route(){

}

void skt_route(){

}

void mfmf_gEnd(){

}

void srr_gEnd(){

}

void urtnk_gEnd(){

}

void skt_gEnd(){
}

void mfmf_bEnd(){

}

void srr_bEnd(){

}

void urtnk_bEnd(){

}

void skt_bEnd(){
}
