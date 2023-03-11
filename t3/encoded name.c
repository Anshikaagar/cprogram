/*Encoded Name
It is given that name contains five characters. You are given ASCII value of each character separated by &. Now you have to decode it and find that Funny name.

Input Format

Five & symbol separated integers representing the ASCII value of character at that position.

Constraints

0 < W1,W2,W3,W4,W5 < 255

Output Format

Single line containing five characters representing the name.

Sample Input 0

80&69&65&75&85
Sample Output 0

PEAKU*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c,d,e;
    scanf ("%d&%d&%d&%d&%d",&a,&b,&c,&d,&e);
    printf ("%c%c%c%c%c",a,b,c,d,e);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}