/*Program to check whether number is Palindrome or not.

Palindrome Number - The number which is equal to reverse number know as Palindrome Number. For example Number 12321 is a Palindrome Number, because 12321 is equal to it’s reverse Number 12321.

In this program, we will read an integer number and check whether it is Palindrome Number or not, to check Palindrome Number firstly we will calculate it’s Reverse Number. If input Number is equal to Reverse Number then Number will be a Palindrome Number.

Input Format

Take an integer n from the user.
Constraints

n>=0 && n<=100000000
Output Format

If entered number is palindrome then print "Palindrome."
If entered number is not palindrome then print "Not Palindrome."
Sample Input 0

987
Sample Output 0

Not Palindrome.
Sample Input 1

121
Sample Output 1

Palindrome.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,b,c=0;
    scanf ("%d", &n);
    int a=n;
    int k=log10(n)+1;
    for (int i=1; i<=k; i++)
    {
        b=n%10;
        c=(c*10)+b;
        n=(int)n/10;
    }
    if (a==c)
    {
        printf ("Palindrome.");
    }
    else 
    {
        printf ("Not Palindrome.");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}