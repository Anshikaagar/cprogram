/*Program to calculate sum of all digits

E.g. 1230=1+2+3+0

Input Format

Take an integer n from the user.
Constraints

n>=0 && n<=1000000
Output Format

It should print the sum of digits of the given number.
Sample Input 0

1230
Sample Output 0

6
Explanation 0

1230 = 1+2+3+0 = 6*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,c=0,b;
    scanf ("%d", &n);
    int k=log10(n)+1;
    for (int i=1; i<=k; i++){
        b=n%10;
        c=c+b;
        n=(int)n/10;}
    printf ("%d", c);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}