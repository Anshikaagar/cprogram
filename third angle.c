#include <stdio.h>
void main()
{
    float a,b,c;
    scanf ("%f%f", &a,&b);
    printf ("First angle is:%0.2f", a);
    printf ("\nSecond angle is:%0.2f", b);
    c=180-(a+b);
    printf ("\nThird angle is:%0.2f", c);
}