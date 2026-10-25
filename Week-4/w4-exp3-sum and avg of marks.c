#include <stdio.h>
void main()
{
int a, b, c, d, e,Tot;
float Avg;
printf("Enter values of a,b,c,d,e: ");
scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
Tot = a + b + c + d + e;
Avg = Tot / 5.0;
printf("\nTotal marks = %d", Tot);
printf("\nAverage marks = %f",Avg);
}