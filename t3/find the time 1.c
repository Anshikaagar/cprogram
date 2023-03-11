/*Find the Time 1

You want some loan and a bank is ready to give you loan on simple interest. It is given that when you will return the amount, you will return amount which is twice of principal amount. Bank has given you rate R . You have to find the time after which you will be returning the total amount.

Input Format

First line contains rate R.

Constraints

0 < |P,R| < 1000000

Output Format

Single floating point number rounding upto 2 decimal places representing the time T.

Sample Input 0

10
Sample Output 0

10.00*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float r,t;
    scanf ("%f", &r);
    t=(1/r);
    printf ("%0.2f",t*100);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}