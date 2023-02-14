#include <stdio.h>
void main()
{
    float s,a;
    scanf ("%f", &s);
    printf ("Side is:%0.2f",s);
    a=(1.732*s*s)/4;
    printf ("\nArea is:%0.2f",a);
}