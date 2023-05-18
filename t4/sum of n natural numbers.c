/*Program to calculate sum of first N natural numbers.

E.g. 5 then 5+4+3+2+1

Input Format

Take an integer n from the user.
Constraints

n<=100000000
n>=0
Output Format

It should print the sum of natural numbers upto n.
Sample Input 0

5
Sample Output 0

15
Sample Input 1

10
Sample Output 1

55*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,c=0;
    scanf ("%d" , &n);
    for (int i=1; i<=n; i++){
        c=c+i;}
    printf ("%d", c);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}