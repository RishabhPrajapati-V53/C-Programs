#include<stdio.h>
void main()
{
float length,m,km;
printf("Enter the length(in cm) to be converted : ");
scanf("%f",&length);
m = length/100;
printf("The length in meter is : %f\n",m);
km = length/100000;
printf("The length in kilometers is : %f\n",km);

}