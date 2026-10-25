#include<stdio.h>
void main()
{
 float c,f;
 printf("\nEnter celsius temperature:");
 scanf("%f",&c);
 f=(c*9/5)+32;
 printf("\nFarenheit= %f",f);
 printf("\nEnter fahrenheit temperature:");
 scanf("%f", &f);
 c=(f-32)*5/9;
 printf("\nCelsius = %f",c);
}