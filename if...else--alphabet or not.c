/*Alphabet or not*/
#include <stdio.h>
void main()
{
    char a;
    scanf ("%c",&a);
    if ((a>='a' && a<='z') || (a>='A' && a<='Z'))
    {
        printf ("%c is an alphabet",a);
    }
    else
    {
        printf ("%c is not an alphabet",a);
    }
}