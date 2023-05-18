/*Program to Reverse an Integer Number/ Program for Reverse Number. This program will read an integer positive number and reverse that number.

For Example input number is 1234 after reversing number will be 4321.

The logic behind to implement this program - Input Number, and run a loop until number is greater than 0, using remainder (Modulus) operator extract last digits and then dividing by 10, last digits will be removed. This process will be executed until number is not zero.

Input Format

Take an integer n from the user.
Constraints

n>=0 && n<=100000000
Output Format

It should print the reverse of the given number.
Sample Input 0

1234
Sample Output 0

4321*/

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

        c=(c*10)+b;

        n=(int)n/10;}

    printf ("%d", c);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}