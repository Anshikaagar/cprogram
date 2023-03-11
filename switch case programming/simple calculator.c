#include <stdio.h>
void main()
{
    int a,b,d;
    char c;
    printf ("Enter the operator");
    scanf ("%c",&c);
    printf ("First number");
    scanf ("%d",&a);
    printf ("Second number");
    scanf ("%d",&b);
    switch (c)
    {
        case '+':
        d=a+b;
        printf ("Sum is:%d",d);
        break;
        case '-':
        d=a-b;
        printf ("Difference is:%d",d);
        break;
        case '*':
        d=a*b;
        printf ("Product is:%d",d);
        break;
        case '/':
        d=a/b;
        printf ("Division is:%d",d);
        break;
        default:
        printf ("Operator is not correct");
        break;
        
    }
}