/*This program will read value of N and print all Leap Years from 1 to N years. There are two conditions for leap year:

If year is divisible by 400 ( for Century years),
If year is divisible by 4 and must not be divisible by 100 (for Non Century years).
Input Format

Take an integer year from the user.
Constraints

year>=1 && year<=10000
Output Format

It should print all the leap years between 1 to year.
Sample Input 0

20
Sample Output 0

4 8 12 16 20
Sample Input 1

100
Sample Output 1

4 8 12 16 20 24 28 32 36 40 44 48 52 56 60 64 68 72 76 80 84 88 92 96*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf ("%d", &n);
    for (int i=1; i<=n; i++){
        if ((i%400==0) || (i%4==0 && i%100!=0)){
            printf ("%d ", i);}
        }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}