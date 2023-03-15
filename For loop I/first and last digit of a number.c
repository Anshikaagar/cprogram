#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,f,l;
    scanf ("%d",&a);
    int k=log10(a);
    b=pow(10,k);
    f=a/b;
    printf ("First digit is:%d", f);
    l=a%10;
    printf ("\nLast digit is:%d",l);
    
}