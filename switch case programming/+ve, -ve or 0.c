/*#include <stdio.h>
void main()
{
    int a;
    scanf ("%d",&a);
    switch (a>0)
    {
        case 1:
        printf ("%d is positive",a);
        switch (a==0)
        {
            printf ("%d is zero",a);
        }
        break;
        case 0:
        printf ("%d is negative",a);
        break;
    }
}*/

 
#include<stdio.h>
void main() {
 
    int a;
    scanf("%d", &a);

    switch (a >= 0)
    {
    case 1:
        switch (a == 0)
        {
        case 1:
            printf("%d is Zero",a);
            break;
        default:
            printf("%d is positive",a);
            break;
        }
        break;
    case 0:
        printf("%d is negative",a );
        break;
    }
}