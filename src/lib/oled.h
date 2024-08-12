//OLED
#include <U8g2lib.h>
int    oledRun = 0;

void oledTest(String pinSCL, String pinSDA) {
  U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE, /* clock=*/ pinSCL.toInt(), /* data=*/ pinSDA.toInt());

  u8g2.begin();

  u8g2.clearBuffer();  // 清空缓冲区

  u8g2.setFont(u8g2_font_6x10_tf);  // 设置字体和字号

  // 绘制第一行文本
  u8g2.setCursor(0, 10);
  u8g2.print("第一行文本");

  // 绘制第二行文本
  u8g2.setCursor(0, 20);
  u8g2.print("第二行文本");

  u8g2.sendBuffer();  // 将缓冲区内容发送到显示屏

  //delay(1000);  // 延迟1秒钟


} 

void getOLED(){
  U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE, /* clock=*/ 14, /* data=*/ 12);

  u8g2.begin();
  u8g2.enableUTF8Print();
  u8g2.clearBuffer();
  u8g2.setFontPosTop();
  u8g2.setFont(u8g2_font_wqy12_t_gb2312a);
  
  u8g2.drawUTF8(0, 1,  "春种一粒粟,秋收万颗子");
  u8g2.drawUTF8(0, 13, "寒来暑往,不负韶华。");
  u8g2.drawUTF8(0, 25, "");
  u8g2.drawUTF8(0, 49, "    中技云第十波    ");

  u8g2.sendBuffer();  // 将缓冲区内容发送到显示屏
}
