#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b,c;
    scanf("%d%d", &a, &b);
    printf ("First number is:%d",a);
    printf ("\nSecond number is:%d",b);
    c=a;
    a=b;
    b=c;
    printf ("%d %d", a,b);
    printf ("\nFirst number is:%d",a);
    printf ("\nSecond number is:%d",b);
    
    return 0;
}
