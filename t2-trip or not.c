/* Trip or Not
Your exams are near and you have to prepare for that. You are given N days left for your exams in which you have to prepare S subjects each having C chapters. Each chapter takes H hour to prepare. Goa trip is before exams and it is L days long trip during which you cannot study. You want to go Goa so you are ready to study T hours daily. You have to calculate and find whether or not you can go Goa. If you can go Goa, print Goa Jaayenge otherwise print Padhai Karenge.

Input Format

Single line containing space separated N,S,C,H,L,T

Constraints

0 < |N,S,C,H,L,T| < 10000

Output Format

Single line containg message mentioned in question.

Sample Input 0

1 1 1 1 1 1
Sample Output 0

Padhai Karenge
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    



    int n,s,c,h,l,t;

    scanf("%d %d %d %d %d %d",&n,&s,&c,&h,&l,&t);

    if (((n-l)*t)>=(s*c*h)){

        printf("Goa Jaayenge");

    }else{

          printf("Padhai Karenge");

        }




        
    return 0;
}
