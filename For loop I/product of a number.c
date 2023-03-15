#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,c=1;
    scanf ("%d",&a);
    int k=log10(a)+1;
    printf ("%d\n", k);
    for (int i=1;i<=k; i++)
    {
        b=a%10;
        c=c*b;
        a=(int)a/10;
    }
    printf ("%d\n",c);
}