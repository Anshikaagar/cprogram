/*Farmer Ramu has three fields with potatoes planted in them. He harvested x potatoes from the first field, y potatoes from the second field and is yet to harvest potatoes from the third field. Ramu is very superstitious and believes that if the sum of potatoes he harvests from the three fields is a prime number , he'll make a huge profit. Please help him by calculating for him the minimum number of potatoes that if harvested from the third field will make the sum of potatoes prime. At least one potato should be harvested from the third field.

Input Format

The first line of the input contains an integer T denoting the number of test cases. Each of the next T lines contain 2 integers separated by single space: x and y.

Constraints

1 ≤ T ≤ 1000
1 ≤ x ≤ 10^6
1 ≤ y ≤ 10^6
Output Format

For each test case, output a single line containing the answer.

Sample Input 0

2
1 3
4 3
Sample Output 0

1
4
Explanation 0

In example case 1: the farmer harvested a potato from the first field and 3 potatoes from the second field. The sum is 4. 
If he is able to harvest a potato from the third field, that will make the sum 5, which is prime. Hence the answer is 1
(he needs one more potato to make the sum of harvested potatoes prime.)*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isprime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int t;
    scanf("%d",&t);
    for (int i=1; i<=t; i++)
    {
        int x,y;
        scanf ("%d %d",&x,&y);
        int s=x+y;
        int i=1;
        while(!isprime(s+i)) i++;
        printf("%d\n",i);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}