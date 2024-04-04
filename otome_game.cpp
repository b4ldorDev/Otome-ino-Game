#include <Arduino.h> 
#include "bth.h" 
#include "frames.h"

String intro(){
  show_text("dialogos de introducción1");
  show_text("dialogos de introducción2");
  show_text("Ingresa tu nombre!!");
  String  user = read_name();
  String  text("Bienvenid@ ");
  show_text(user);
  return user ;

}

char situation1(String  n){
  show_text("Hola de nuevo " );
  show_text(n);
  show_text("Contexto");
  show_text("Problematica");
  show_text("dialogo mf");
  show_text("dialogo srr");
  show_text("Pregunta"); 
  show_text(" A, B, C, D");
  char option = read_character();
  show_text("Elegiste" + option);
  return option;
  
}   

char situation2(String  n){
  show_text("Hola de nuevo");
  show_text(n);
  show_text("Contexto");
  show_text("Problematica");
  show_text("dialogo urtnk");
  show_text("dialogo skt");
  show_text("dialogo mf");
  show_text("dialogo srr");  
  show_text("Pregunta"); 
  show_text(" A, B, C, D");
  char option = read_character();
  show_text("Elegiste" + option);
  return option;    
}

char situation3(String  n){
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
  show_text(" A, B, C, D");
  char option = read_character();
  show_text("Elegiste" + option);    
}

void common_ending(String n){

}

char mfmf_route(String n){
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
  char option = read_character();

  return option;    

}

char srr_route(String  n){

}

char urtnk_route(String  n){

}

char skt_route(String  n){

}

void mfmf_gEnd(String  n){

}

void srr_gEnd(String  n){

}

void urtnk_gEnd(String  n){

}

void skt_gEnd(String  n){
}

void mfmf_bEnd(String  n){

}

void srr_bEnd(String  n){

}

void urtnk_bEnd(String  n){

}

void skt_bEnd(String  n){
}
