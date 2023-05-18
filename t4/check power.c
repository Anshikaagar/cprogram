/*Program to check whether an integer number is power of two (2) or not.

The logic to implement this program - Divide number by 2 until number is not equal to 1, if in the loop remainder is not equal to 0 then number is not power of 2 otherwise number is power of 2.

Input Format

Take an integer n from the user.
Constraints

n>=1 and n<=100000000
Output Format

It should print 1 if n is any power of 2 and 0 if not.
Sample Input 0

32
Sample Output 0

1
Sample Input 1

12
Sample Output 1

0*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,a;
    scanf ("%d", &n);
    a=1;
    for (int i=0; i<n; i++)
    {
        if (a==n){
            printf ("1");
            break;
        }
        a*=2;
    }
    if (a!=n)
    {
        printf ("0");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}