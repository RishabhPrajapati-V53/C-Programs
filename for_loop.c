#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter the number of terms : ");
    scanf("%d",&num);
    printf("\nThe first %d natural terms are : \n",num);
    for(i = 1;i<=num;i++)
    {
        printf("%d",i);
        sum = sum+i;
        
    }
    printf("\nThe sum of first %d natural terms is : %d ",num,sum);
}
