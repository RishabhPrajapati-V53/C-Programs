#include<stdio.h>
void main()
{
    float area,radius,diameter,circumferance;
    printf("Enter the radius of the Circle : ");
    scanf("%f",&radius);
    diameter = radius*2;
    printf("The diameter of the circle is : %f\n",diameter);
      area = 3.14*radius*radius;
    printf("The area of the circle is : %f\n",area);
    circumferance = 2*3.14*radius;
    printf("The circumferance of the circle is : %f\n",circumferance);
}