#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    float a;
    printf ("Enter a value");
    scanf ("%f", &a);
    printf ("Floor value:%f", floor(a));
    printf ("\nCeil value:%f", ceil(a));
    return 0;
}