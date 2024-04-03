#include "otome_game.h" 
int mfmf = 0;
int srr = 0;
int urtnk = 0 ; 
int skt = 0; 

void setup(){
  Serial.begin(9600);  
}


void loop(){
 String username = intro();
 int option1 =  situation1();
 switch (option1){
   case "A":
     mfmf +=1;
     break; 
   case "B":
     srr +=1;
     break;
   case "C":
     urtnk +=1;
     break;
   case "D": 
     skt +=1;
     break; 
 }
 int option2 =  situation2();
 switch (option2){
  case "A":
    mfmf +=1;
    break;
  case "B":
    srr +=1;
    break;
  case "C":
    urtnk +=1;
    break;
  case "D":
    skt +=1;
    break;        
 }
 int option3 =  situation3();
 switch (option3){
  case "A":
    mfmf +=1;
    break;
  case "B":
    srr +=1;
    break;
  case "C":
    urtnk +=1;
    break;
  case "D":
    skt +=1:
    break;  
 }

 if(mfmf >= 2){
  char option = mfmf_route(username);
  if (option == "A"){
    mfmf_gEnd(username);
    }
  else{
    mfmf_bEnd(username); 
    }
  }
 if(srr >= 2){
  char option = srr_route(username);
  if (option == "A"){
    srr_gEnd(username);
    }
  else{
    srr_bEnd(username);
    }
  }
 if(urtnk >=2){
  char option = urtnk_route(username);
  if (option== "A"){
    urtnk_gEnd(username);
    }
  else {
    urtnk_bEnd(username);
    }  
  }
 if(skt >=2){
  char option = skt_route(username); 
  if (option=="A"){
    skt_gEnd(username); 
  }
  else{
    skt_bEnd(username);
    }
  }
 else{
  common_ending(username);
  }
}
