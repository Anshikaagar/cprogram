#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int f,i;
    printf("Enter a value in feet");
    scanf("%d",&f);
    i=f*12;
    printf ("\nIn inches:%d", i);
    return 0;
}