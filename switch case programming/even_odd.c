#include <stdio.h>
void main()
{
    int a;
    scanf ("%d",&a);
    switch (a%2==0)
    {
        case 1:
        printf ("%d is even",a);
        break;
        case 0:
        printf ("%d is odd",a);
        break;
    }
}