#include<stdio.h>
int main()
{
    float side,area;
    printf("Enter the side of the square  :  ");
    scanf("%f",&side);
    area = side*side;
    printf("The area of the square is : %f ",area);
    return 0;
}