#ifdef LCD_I2C
#define LCD_I2C

void ledOutput();
void led_init(int B,int C,int D);
void led_clear();
void led_setCursor(int S,int ID);
void led_print(int D0,int D1,int D2,int D3,int D4,int D5,int D6,int D7);
void led_srollDisplayLeft();
void led_srollDisplayRight();
void led_createChar();

#endif
