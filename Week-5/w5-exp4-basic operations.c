#include <stdio.h>
void main()
{
float a,b;
int choice;
printf("Enter a,b: ");
scanf("%f%f", &a, &b);
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("Enter the number of your choice: ");
scanf("%d", &choice);
switch(choice)
    {
        case 1:
            printf("Addition = %f", a + b);
            break;

        case 2:
            printf("Subtraction = %f", a - b);
            break;

        case 3:
            printf("Multiplication = %f", a * b);
            break;

        case 4:
            if (b == 0)
            {
                printf("Division by zero is not possible ");
            }
            else
            {
                printf("Division = %f", a / b);
            }
            break;

        default:
            printf("Invalid option");
    }
}