/*You know that price of A apples have price B. Find the price of C apples.

Input Format

First line contains T, number of testcases. For each testcase, single line contains space separated A, B and C.

Constraints

0 < |A,B,C| < 1000000000000000

Output Format

For each testcase, print the amount of C apples.

Sample Input 0

1
2 4 4
Sample Output 0

8*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t,a,b,c;
    scanf("%d",&t);
    for (int i=0; i<t; i++)
    {
        scanf("%d %d %d", &a,&b,&c);
        int s;
        s=b/a;
        c=c*s;  
        printf("%d\n",c);
    }
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
    
}