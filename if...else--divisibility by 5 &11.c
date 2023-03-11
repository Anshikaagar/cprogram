/*Divisible by 5 & 11*/
#include <stdio.h>
void main()
{
    int a;
    scanf ("%d",&a);
    if (a%5==0 && a%11==0)
    {
        printf ("%d is divisible",a);
    }
    else
    {
        printf ("%d is not divisible",a);
    }
}