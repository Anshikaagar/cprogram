/* Hello Me 1
Write a program that asks for user`s name and print Welcome NAME

Input Format

Single line containing a string S.

Constraints

0 < | S | < 1000000

Output Format

Single line containing Welcome followed by name of user.

Sample Input 0

Ram
Sample Output 0

Welcome Ram
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char n[20];
    scanf ("%s",n);
    printf ("Welcome %s",n);
    getchar();

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

