/*You are given T testcases in which each test case contains a series of size Ni numbers. Find min and max for each series.

Input Format

First line contains T. For each Testcase in T First line contains number of terms N. Next line contains N space separated numbers.

Constraints

-1000000009 < |T,N,Ai| < 1000000009

Output Format

For each testcase in T print a line contains two numbers min and then max.

Sample Input 0

1
4
1 2 3 4
Sample Output 0

Min=1 Max=4*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int t, n, i, num, min, max;
    scanf("%d", &t);

    while(t--) {
        scanf("%d", &n);
        min = 1000000009;
        max = -1000000009;

        for(i=0; i<n; i++) {
            scanf("%d", &num);
            if(num < min) {
                min = num;
            }
            if(num > max) {
                max = num;
            }
        }

        printf("Min=%d Max=%d\n", min, max);
    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}