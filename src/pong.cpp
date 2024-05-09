#include "tonc.h"

int main()
{
    REG_DISPCNT = DCNT_MODE3 | DCNT_BG2;
    m3_plot(120, 96, RGB15(0,0,31));
    return 0;
}