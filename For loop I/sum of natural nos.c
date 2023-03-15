#include <stdio.h>
void main()
{
    int n,d=0;
    scanf ("%d", &n);
    for (int i=1; i<=n ; i++)
    {
        d=d+i;
    }
    printf ("%d", d);
}