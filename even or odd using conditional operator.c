#include <stdio.h>
void main()
{
   int a;
   scanf ("%d",&a);
   printf ("Number is: %d",a);
   a%2==0?printf("\n%d is even",a) : printf ("\n%d is odd",a);
}