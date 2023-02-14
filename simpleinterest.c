#include <stdio.h>
void main()
{
    int p,r,t,s;
    scanf ("%d%d%d", &p,&r,&t);
    printf("Principal is:%d",p);
    printf("\nRate of Interest is:%d",r);
    printf("\nTime is:%d",t);
    s=(p*r*t)/100;
    printf("\nSimple Interest is:%d",s);
}