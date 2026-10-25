#include<stdio.h>
void main()
{
int year;
printf("Enter the year:");
scanf("%d" ,&year);
if (year % 400 == 0)
    printf("Leap year");
else if (year % 100 == 0)
    printf("%d is Not a leap year", year);
else if (year % 4 == 0)
    printf("%d is a Leap year", year);
else
    printf("%d is Not a leap year", year);
}