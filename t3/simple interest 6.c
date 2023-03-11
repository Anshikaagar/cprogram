/* Simple Interest 6

You are given Principal Amount P, rate R and time T. Calculate Final Amount with Simple Interest on it.

Input Format

First line contains P Second line contains R Third line contains T

Constraints

0 < P,R,T < 100000

Output Format

A integer representing total amount.

Sample Input 0

1000
10
10
Sample Output 0

2000
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int p,r,t,s;
    scanf ("%d", &p);
    scanf ("%d", &r);
    scanf ("%d", &t);
    s=((p*r*t)/100)+p;
    printf ("%d",s);
    return 0;
}

