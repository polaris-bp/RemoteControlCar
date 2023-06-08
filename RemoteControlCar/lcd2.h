//
//  lcd2.h
//  RemoteControlCar
//
//  Created by Taichi Uragami on 2023/06/08.
//

#ifndef lcd2_h
#define lcd2_h

#include <stdio.h>
// #include lcd_lib?

typedef struct t_lcdmsg { //　このヘッダファイルで宣言でいいのか相談
    T_MSG header;
    int msg_lcd[256];
} T_LCDMSG;

void task_lcd_display_mode(void);
void task_motor_lcd_display_s(void);
#endif /* lcd2_h */
