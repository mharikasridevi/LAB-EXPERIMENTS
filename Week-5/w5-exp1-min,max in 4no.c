#include <stdio.h>
void main()
{
int a, b, c, d, max1, min1,min2,max2;
printf("Enter values of a,b,c,d: ");
scanf("%d%d%d%d", &a, &b, &c, &d);
if (a>b)
  min1=b, max1=a;
else 
  min1=a,max1=b;
if (c >d)
  min2=d, max2=c;
else 
  min2=c,max2=d;
if(min1>min2)
  printf("\nMinimun = %d", min2);
else
  printf("\nMinimum = %d", min1);
if(max1>max2)
  printf("\nMaximum = %d", max1);
  else
  printf("\nMaximum = %d", max2);
}