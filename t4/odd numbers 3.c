/*Given a range (value of N) and we have to print all ODD numbers from 1 to N using while loop.

Logic:

There are two variables declared in the program 1) number as a loop counter and 2) n to store the limit.

Reading value of n by the user.

Initialising loop counter (number) by 1 as initial value number =1 Using while loop by checking the condition number<=n (value of number is less than or equal to n) - this will execute the loop until the value of number is less than or equal to n.

Then, within the loop, we are checking the condition to check whether number is ODD or not, the condition is (number%2 != 0) - it returns true if number is not divisible by 2.

Input Format

Take an integer N from the user.
Constraints

N<=100000000
N>=1
Output Format

It should print all the odd numbers between 1 to N.
Sample Input 0

10
Sample Output 0

1 3 5 7 9*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf ("%d", &n);
    int i=1;
    while (i<=n)
    {
        if (i%2!=0)
        {
            printf ("%d ", i);
}
        i++;
        }
            
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}