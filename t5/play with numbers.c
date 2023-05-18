/*Here you have to find the sum of Natural Number/Factorial of Number of all natural numbers from 1 to N". Series: 1/1! + 2/2! + 3/3! + 4/4! + ... N/N!

Input Format

Take an integer "n" as the limit of series from the user.
Constraints

n>0 && n<10000
Output Format

Print the sum of the natural/Factorial of Number of all natural numbers series.
Sample Input 0

5
Sample Output 0

2.708333*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i;
    double f=1,s=0;
    scanf("%d",&n);
    
    for (i=1; i<=n; i++)
    {
        f=f*i;
        s=s+(i/f);
    }
    printf("%lf",s);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}