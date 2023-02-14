#include <stdio.h>
void
main ()
{
    float a, b, c, d, e, t, av, p;
    scanf ("%f%f%f%f%f", &a, &b, &c, &d, &e);
    printf ("Marks of first subject:%0.2f", a);
    printf ("\nMarks of second subject:%0.2f",b);
    printf ("\nMarks of third subject:%0.2f",c);
    printf ("\nMarks of fourth subject:%0.2f",d);
    printf ("\nMarks of fifth subject:%0.2f",e);
    t=a+b+c+d+e;
    printf ("\nTotal is:%0.2f",t);
    av=t/5;
    printf ("\nAverage is:%0.2f",av);
    p=(t/500)*100;
    printf ("\nPercentage:%0.2f",p);
}

