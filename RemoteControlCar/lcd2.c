//
//  lcd2.c
//  RemoteControlCar
//
//  Created by Taichi Uragami on 2023/06/08.
//

#include "lcd2.h"

//extern T_LCDMSG t_lcdmsg;
extern char mode_status;

void task_lcd_display_mode()
{
    if (mode_status == 0x00) {
        lcd_clr_now_page();
    } else if (mode_status == 0x01) {
        lcd_puts("1DRIVING");
    } else if (mode_status == 0x02) {
        lcd_puts("2PLAYING");
    } else {
        // NOT REACHED
    }
}
void task_motor_lcd_display_s()
{
    T_LCDMSG *pmsg;
    rcv_mbx(SOME_MBX, (T_MSG **)&pmsg);
    lcd_puts(pmsg->msg_lcd);
}
