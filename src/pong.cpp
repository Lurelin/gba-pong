#include "tonc.h"

class rect {
    public:
        u16 x;
        u16 y;
        rect(u16 xIN, u16 yIN) {
            x = xIN;
            y = yIN;
        }
        void drawrect(u16 xIN, u16 yIN) {
            for (u16 xrect = 0; xrect < x; xrect++) {
                for (u16 yrect = 0; yrect < y; yrect++) {
                    m3_plot(xIN + xrect, yIN + yrect, RGB15(0,0,31));
                }
            }
        }
};

int main()
{
    REG_DISPCNT = DCNT_MODE3 | DCNT_BG2;
    m3_plot(4, 4, RGB15(0,0,31));
    rect testRect(10, 10);
    testRect.drawrect(5, 5);
    return 0;
}