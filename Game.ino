#include "otome_game.h" 
int mfmf = 0;
int srr = 0;
int urtnk = 0 ; 
int skt = 0; 
String  username ="";
void setup(){
  Serial.begin(9600);  
}


void loop(){
 String username = intro();
 int option1 = situtation1(username);
 switch (option1){
   case 1:
     mfmf +=1;
     break; 
   case 2:
     srr +=1;
     break;
   case 3:
     urtnk +=1;
     break;
   case 4: 
     skt +=1;
     break; 
 }
 int option2 = situtation2(username);
 switch (option2){
  case 1:
    mfmf +=1;
    break;
  case 2:
    srr +=1;
    break;
  case 3:
    urtnk +=1;
    break;
  case 4:
    skt +=1;
    break;        
 }
 int option3 =  situtation3(username);
 switch (option3){
  case 1:
    mfmf +=1;
    break;
  case 2:
    srr +=1;
    break;
  case 3:
    urtnk +=1;
    break;
  case 4:
    skt +=1;
    break;        
 }
 
 if(mfmf >= 2){
  int option = mfmf_route(String  username);
  if (option == 1){
    mfmf_gEnd(String  username);
    }
  else{
    mfmf_bEnd(String  username); 
    }
  }
 if(srr >= 2){
  int option = srr_route(String  username);
  if (option == 1){
    srr_gEnd(String  username);
    }
  else{
    srr_bEnd(String  username);
    }
  }
 if(urtnk >=2){
  int option = urtnk_route(String username);
  if (option== 1){
    urtnk_gEnd(String  username);
    }
  else {
    urtnk_bEnd(String  username);
    }  
  }
 if(skt >=2){
  int option = skt_route(String  username); 
  if (option==1){
    skt_gEnd(String  username); 
  }
  else{
    skt_bEnd(String username);
    }
  }
 else{
  common_ending(String  username);
  }
}
