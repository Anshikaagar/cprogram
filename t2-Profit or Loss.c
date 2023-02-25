#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    float c,s,a,b,p,l;
    scanf ("%f", &c);
    scanf ("%f", &s);
    a=s-c;
    b=c-s;
    p=((a*100)/c);
    l=((b*100)/c);
    s>c? printf("Profit\n%0.2f%%",p): printf ("Loss\n%0.2f%%",l);
    return 0;
}