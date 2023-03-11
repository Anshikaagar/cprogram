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
    else if (a>='0' && a<='9')
    {
        printf ("%c is a digit",a);
    }
    else
    {
        printf ("%c is a special character",a);
    }
}