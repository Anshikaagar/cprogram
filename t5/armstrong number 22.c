/*Armstrong Number - An Armstrong Number is a Number which is equal to it’s sum of individual digits raise to the power of number of digits.

For example -

153 is an Armstrong number: here 153 = (1*1*1) + (5*5*5) + (3*3*3).

1634 is an Armstrong number: here 1634 = (1*1*1*1) + (6*6*6*6) + (3*3*3*3) + (4*4*4*4).

Input Format

Take an integer n from the user.
Constraints

n>=1
n<=100000000
Output Format

If Armstrong then print : "Armstrong Number."

If not Armstrong then print : "Not Armstrong."

Sample Input 0

1
Sample Output 0

Armstrong Number.
Sample Input 1

15
Sample Output 1

Not Armstrong.
Sample Input 2

153
Sample Output 2

Armstrong Number.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,m,s=0,b;
    scanf("%d", &n);
    m=n;
    int k=log10(n)+1;
    for (int i=0; i<k; i++)
    {
        b=n%10;
        s=s+ (pow(b,k));
        n=(int)n/10;
    }
    if (m==s)
    {
        printf("Armstrong Number.");
    }
    else
    {
        printf("Not Armstrong.");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}