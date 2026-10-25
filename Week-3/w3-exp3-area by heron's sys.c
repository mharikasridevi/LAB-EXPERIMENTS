#include <stdio.h>
#include <math.h>
void main()
{
float a, b, c, s, A;
printf("Enter values of a,b,c: ");
scanf("%f%f%f",&a,&b,&c);
s = (a + b + c) / 2;
A = sqrt(s * (s - a) * (s - b) * (s - c));
printf("\nArea of triangle by heron's formula = %f",A);
}