#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int m;
    scanf ("%d", &m);
    if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
        printf ("31");
    }
    else if (m==4 || m==6 || m==9 || m==11){
        printf("30");
    }
    else if (m==2){
        printf ("28");
    }
    else{
        printf ("Wrong month value.");
    }
    return 0;
}
