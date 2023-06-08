//
//  lcd1.h
//  RemoteControlCar
//
//  Created by Taichi Uragami on 2023/06/08.
//

#ifndef lcd1_h
#define lcd1_h

#include <stdio.h>
// #include lcd_lib?
typedef struct t_lcd_music_msg { //　このヘッダファイルで宣言でいいのか相談
    T_MSG header;
    int msg_cont;
} T_LCD_MUSIC_MSG;

void task_led_display_music(void);
#endif /* lcd1_h */
