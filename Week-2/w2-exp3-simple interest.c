#include<stdio.h>
void main()
{
float P,T,R,S;
printf("Enter P,T,R values:");
scanf("%f%f%f",&P,&T,&R);
S=P*T*R/100;
printf("Simple interest=%f",S);
} 