//
//  lcd1.c
//  RemoteControlCar
//
//  Created by Taichi Uragami on 2023/06/08.
//

#include "lcd1.h"

// extern T_LCD_MUSIC_MSG t_lcd_music_msg;

void task_led_display_music()
{
    while (1) {
        T_LCD_MUSIC_MSG *pmsg;
        rcv_mbx(SOME_MBX, (T_MSG **)&pmsg);
        int msg = pmsg->msg_cont;
        if (msg == 0x01) {
            lcd_puts("キュウキュウシャ");
        } else if (msg == 0x02) {
            lcd_puts("ファミマ");
        } else if (msg == 0x03) {
            lcd_puts("スター");
        } else if (msg == 0x06) {
            lcd_puts("チャルメラ");
        } else if (msg == 0x07) {
            lcd_puts("ホシニネガイヲ");
        } else if (msg == 0x08) {
            lcd_puts("グレンゲ");
        } else if (msg == 0x09) {
            lcd_puts("オリジナル");
        } else if (msg == 0x31) {
            lcd_puts("ド");
        } else if (msg == 0x32) {
            lcd_puts("レ");
        } else if (msg == 0x33) {
            lcd_puts("ミ");
        } else if (msg == 0x34) {
            lcd_puts("ファ");
        } else if (msg == 0x35) {
            lcd_puts("ソ");
        } else if (msg == 0x36) {
            lcd_puts("ラ");
        } else if (msg == 0x37) {
            lcd_puts("シ");
        } else if (msg == 0x38) {
            lcd_puts("ドH");
        } else if (msg == 0x39) {
            lcd_puts("レH");
        } else {
            // NOT REACHED
        }
    }
}
