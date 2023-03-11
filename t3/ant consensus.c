/*Ant Consensus

There is a group of ant which on the start of day makes itself K times, it was previous day. Initially its count was C. You have to find its population on N th day.
Note: There is a header file in C Language named math.h which includes a function pow(a,b) which calculates a to the power b and returns a double number.

Input Format

First line contains C Second line contains K Third line contains N

Constraints

0 < C,K,N < 100000

Output Format

Single integer representing the total population of ant on N th day.

Sample Input 0

4
9
3
Sample Output 0

2916
Sample Input 1

98
14
9
Sample Output 1
2024782584832*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{
    int c,k,n;
    scanf ("%d",&c);
    scanf ("%d",&k);
    scanf ("%d",&n);
    long int a;
    a=(pow(k,n))*c;
    printf ("%ld",a);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}