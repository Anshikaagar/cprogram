/*Wonderful Chocolate Offer
You have a uncle who daily gives you D chocolates upto N days. Also you have C chocolates already but your parents allow only to eat one chocolate per day. Calculate the total chocolates at the end of N days.

Input Format

First line contains C Second line contains N Third line contains D

Constraints

0 < C,D,N < 1000000

Output Format

Single Integer representing the total chocolates at the end of N days.

Sample Input 0

5
5
5
Sample Output 0

25*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int d,n,c,a;
    scanf ("%d",&c);
    scanf ("%d",&n);
    scanf ("%d",&d);
    a= (((d*n)+c)-n);
    printf ("%d",a);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}