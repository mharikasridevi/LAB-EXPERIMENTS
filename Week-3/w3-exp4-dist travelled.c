#include <stdio.h>
void main()
{
float speed, time, distance;
printf("Enter the values of speed(m/s) and time(sec): ");
scanf("%f%f", &speed,&time);
distance = speed * time;
printf("Distance travelled = %f", distance);
}