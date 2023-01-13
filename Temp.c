#include<stdio.h>
void main()
{
    float temp,fahrenheit;
    printf("Enter the temperature(in celsius)  :  ");
    scanf("%f",&temp);
    fahrenheit =  (temp*9)/5 + 32;
    printf("The temperature in farenheit is : %f",fahrenheit);
}