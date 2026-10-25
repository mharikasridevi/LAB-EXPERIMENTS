#include<stdio.h>
void main()
{
int a,b,c,s;
float Avg;
printf("Enter the values of a,b,c:");
scanf("%d%d%d",&a,&b,&c);
s=a+b+c;
printf("\nSum of a,b,c is %d",s);
Avg=s/3;
printf("\nThe average of a,b,c is %f",Avg);
}