#include <stdio.h>
void main()
{
int units;
float bill;
printf("Enter units used: ");
scanf("%d", &units);
    if (units <= 100)
        bill = units * 1.50;
    else if (units <= 200)
        bill = units * 2.50;
    else if (units <= 500)
        bill = units * 4.00;
    else
        bill = units * 6.00;
    printf("\nTotal electricity bill = Rs.%f", bill);
}