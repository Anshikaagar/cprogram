/* Compound For Two Years
You are given time = 2 Years. You have to take Principal Amount P and rate R from user and calculate and print compound interest.

Input Format

First line contains P Second line contains R

Constraints

0 < P,R < 100000

Output Format

A number representing compound interest rounding upto 2 decimal places.

Sample Input 0

10000
2
Sample Output 0

404.00
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float p,r,t=2;
    float a,ci;
    scanf ("%f",&p);
    scanf ("%f",&r);
    a=p*((pow((1+r/100),t)));
    ci=a-p;
    printf ("%0.2f",ci);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
