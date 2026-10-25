#include <stdio.h>
#include <math.h>
void main()
{
float P,R,T,C;
printf("Enter P,T,R values: ");
scanf("%f%f%f",&P,&T,&R);
C = P * pow(1 + R / 100, T) - P;
printf("Compound Interest = %f", C);
}