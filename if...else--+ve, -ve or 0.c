/*Negative ,Positive or Zero*/
#include <stdio.h>
void main()
{
    int a;
    scanf ("%d",&a);
    if (a==0)
    {
        printf ("%d is zero",a);
    }
    else if (a>0)
    {
        printf ("%d is positive",a);
    }
    else
    {
        printf ("%d is negative",a);
    }
}