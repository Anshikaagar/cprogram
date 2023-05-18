/*Program to print fibonacci series.

In this program, we will read value of N (N for number of terms) and then print fibonacci series till N terms. Fibonacii series: Is a series of number in which each number is the sum of preceding two numbers.

0 1 1 2 3 5 8 ...

Input Format

Take an integer n from the user.
Constraints

n>=1 and n<=1000000
Output Format

It should print the n terms of fibonacci series.
Sample Input 0

10
Sample Output 0

0 1 1 2 3 5 8 13 21 34*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a=0, b=1;
    printf("%d %d",a,b);
    int n, c=0;
    scanf ("%d",&n);
    for (int i=2; i<n; i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf (" %d", c);
    }
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}