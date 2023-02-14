#include <stdio.h>
void main()
{
    float l,m,km;
    scanf ("%f", &l);
    printf ("Length in cm:%0.2f",l);
    m=l/100;
    printf ("\nLength in m:%0.2f", m);
    km=l/100000;
    printf ("\nLength in km:%0.2f",km);
}