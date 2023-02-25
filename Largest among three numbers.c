#include <stdio.h>
void main()
{
    int a,b,c;
    scanf ("%d%d%d",&a,&b,&c);
    printf ("First number is:%d",a);
    printf ("\nSecond number is:%d",b);
    printf ("\nThird number is:%d",c);
    ((a>=b) && (b>=c))?printf("\nLargest number is:%d", a):((b>=a) && (b>=c))?printf("\nLargest number is:%d",b):printf("\nLargest number is:%d",c);
}