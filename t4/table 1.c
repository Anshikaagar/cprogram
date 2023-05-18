/*This program will print table of numbers in which you will take input for the table from th user, and then print the table in the next line. eg. input: 2 output: 2 4 6 8 10 12 14 16 18 20

Input Format

first line contain an integer n.
Constraints

0

Output Format

The line will contatin the value of table "n" in next line.
Sample Input 0

2
Sample Output 0

2
4
6
8
10
12
14
16
18
20*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf ("%d", &n);
    for (int i=1; i<=10; i++){
        printf ("%d\n", n*i);
        }
        

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}