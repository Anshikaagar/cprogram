#include <stdio.h>
void main()
{
    char a;
    scanf ("%c",&a);
    switch (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' ||a=='I' || a=='O' || a=='U')
    {
        case 1:
        printf ("Vowel");
        break;
        case 0:
        printf ("Consonant");
        break;
    }
}