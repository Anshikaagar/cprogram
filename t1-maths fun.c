#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    float a,b,c;
    scanf ("%f %f", &a, &b);
    printf ("%f", pow(a,b));
    scanf ("%f", &c);
    printf ("\n%f", sqrt(c));
    return 0;
}