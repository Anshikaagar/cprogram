#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a,b,c;
    scanf ("%d %d %d", &a,&b,&c);
    ((a>=b) && (b>=c))?printf("%d",a):((b>=a) && (b>=c))? printf("%d",b):printf("%d",c);
    return 0;
}
