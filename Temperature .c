#include<stdio.h>
int main()
{
float temperature;
printf("Enter your temperature in (°c)\n");
scanf("%f",& temperature );
if(temperature>=37)
{
printf("Have a fever\n");
}
return 0;
}