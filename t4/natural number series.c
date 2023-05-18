/*Here you have to find the sum of the series of natural number till the given limit by the user "n".

Input Format

Take an integer "n" as the limit from the user.
Constraints

n>0 && n<10000
Output Format

Print the sum of the natural number series.
Sample Input 0

5
Sample Output 0

15*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,c=0;
    scanf ("%d", &n);
    for (int i=1; i<=n; i++){
        c=c+i;}
    printf ("%d", c);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}