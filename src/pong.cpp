#include "tonc.h"

class rect {
    u16 x;
    u16 y;
    rect(u16 xIN, u16 yIN) {
        x = xIN;
        y = yIN;
    }
    void drawrect(u16 xIN, u16 yIN) {

    }
};

int main()
{
    REG_DISPCNT = DCNT_MODE3 | DCNT_BG2;
    m3_plot(120, 96, RGB15(0,0,31));
    return 0;
}