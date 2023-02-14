#include <stdio.h>
#include <math.h>
void main ()
{
    int p,r,t,n;
    float c;
    scanf ("%d%d%d", &p,&r,&t);
    printf ("Principal is:%d", p);
    printf ("\nRate of Interest is:%d", r);
    printf ("\nTime is:%d", t);
    c = p* (pow((1 + r / 100), t));
    printf ("\nCompund interest:%0.2f",c);
    
    
}

