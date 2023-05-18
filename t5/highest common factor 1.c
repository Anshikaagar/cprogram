/*Find the Highest Common Factor of the two numbers entered by the user.

Input Format

Take first integer n1 from the user.
Take second integer n2 from the user.
Constraints

n1,n2>=1
n1,n2<=100000000
Output Format

Print the HCF of the given numbers.
Sample Input 0

10 15    
Sample Output 0

5
Sample Input 1

6 9
Sample Output 1

3*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n1,n2,h;
    scanf ("%d %d",&n1,&n2);
    for (int i=1; i<=n1 && i<=n2; ++i)
    {
        if (n1%i==0 && n2%i==0)
            h=i;
        
    }
    printf("%d",h);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}