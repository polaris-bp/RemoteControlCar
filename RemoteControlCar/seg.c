//
//  seg.c
//  RemoteControlCar
//
//  Created by Taichi Uragami on 2023/06/08.
//

#include "seg.h"

extern char mode_status;

void seg_display_mode() {
    if (mode_status == 0x00) {
        PD.DR.BYTE.LL = 0x00;
    } else if (mode_status == 0x01) {
        PC.DR.BYTE.L = SEG_1;
        PD.DR.BYTE.LL = 0x08;
    } else if (mode_status == 0x02) {
        PC.DR.BYTE.L = SEG_2;
        PD.DR.BYTE.LL = 0x08;
    } else {
        // NOT REACHED
    }
}
