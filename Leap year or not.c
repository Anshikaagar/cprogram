#include <stdio.h>
void main()
{
    int y;
    scanf ("%d",&y);
    printf ("Entered year is:%d",y);
    if ((y%4==0)&&(y%400==0))
    {
        printf ("\nIt is a leap year");
    }
    else{
        printf ("\nNot a leap year");
    }
        
}