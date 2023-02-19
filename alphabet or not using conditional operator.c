#include <stdio.h>
void main()
{
    char a;
    scanf ("%c",&a);
    printf("Entered character is:%c",a);
    (a>='A' && a<='Z')||(a>='a'&&a<='z')?printf("\n%c is a character",a):printf("\n%c is not a character",a);
}