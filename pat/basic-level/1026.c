#include <stdio.h>

#define CLK_TCK 100

int main()
{
    int c1, c2;
    scanf("%d %d", &c1, &c2);
    int hh, mm, ss, total;
    total = c2 - c1;
    hh = total / (CLK_TCK * 3600);
    total -= hh * 3600 * CLK_TCK;
    mm = total / (CLK_TCK * 60);
    total -= mm * 60 * CLK_TCK;
    ss = (total+50) / CLK_TCK;
    printf("%02d:%02d:%02d", hh, mm, ss);
}