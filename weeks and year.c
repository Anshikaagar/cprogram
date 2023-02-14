#include <stdio.h>
void main()
{
    int d, y, w;
    scanf ("%d", &d);
    printf ("No. of days:%d", d);
    y=d/365;
    printf("No. of years:%d", y);
    w=d/7;
    printf ("No. of weeks:%d",w);
}