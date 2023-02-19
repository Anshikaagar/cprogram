#include <stdio.h>
void main()
{
    int a,b,max;
    scanf ("%d%d",&a,&b);
    printf ("First number: %d",a);
    printf ("\nSecond number: %d",b);
    max=a>b?a:b;
    printf ("\n%d is maximum",max);
}
