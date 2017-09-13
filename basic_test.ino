/* OLED 0.96 I2C 128x64 White (SSD1306) [D044] : http://rdiot.tistory.com/304 [RDIoT Demo] */

#include "U8glib.h"
U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE);

void setup() {
}

void loop(void) {
  // picture loop
  u8g.firstPage();  
  do {
    draw();
  } while( u8g.nextPage() );
  
  // rebuild the picture after some delay
  delay(500);
}

void draw(void) {
  u8g.setFont(u8g_font_9x15B);
  u8g.setPrintPos(0, 12); 
  u8g.println("OLED 0.96 ");

  u8g.setFont(u8g_font_helvB14);
  u8g.setPrintPos(0,40);
  u8g.println("I2C 128x64");

  u8g.setPrintPos(0,60); 
  u8g.print("Blue");
}
