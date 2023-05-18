/*You're given an integer N.

Write a program to calculate the sum of all the digits of N.

Input Format

The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Constraints

1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
Output Format

Calculate the sum of digits of N.

Sample Input 0

3 
12345
31203
2123
Sample Output 0

15
9
8*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,t,b,c=0;
    scanf ("%d", &t);
    for (int i=1; i<=t; i++){
        scanf ("%d",&n);
        while (n>0){
            b=n%10;
            c=c+b;
            n=n/10;}
        printf ("%d\n", c);
        c=0;
        }
  
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}