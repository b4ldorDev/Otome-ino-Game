#include <Wire.h>
#include <Adafruit_GFX.h> 
#include <Adafruit_SSD1306.h> 

#define ANCHO_PANTALLA 128 
#define ALTO_PANTALLA 64 

#define OLED_RESET -1 
#define DIRECCION_PANTALLA 0x3C

Adafruit_SSD1306 display(ANCHO_PANTALLA, ALTO_PANTALLA, &Wire, OLED_RESET); 

#define LOGO_WIDTH 128
#define LOGO_HEIGHT 64

void setup_game(){
  Serial.begin(9600); 

  if(!display.begin(SSD1306_SWITCHCAPVCC, DIRECCION_PANTALLA)){
    Serial.println(F("FALLO"));
  }

  display.clearDisplay(); 
  display.drawBitmap((display.width() - LOGO_WIDTH)  / 1,((display.height()- LOGO_HEIGHT) / 1)+7, logo, LOGO_WIDTH, LOGO_HEIGHT, WHITE);
  display.display();
}


void questions
