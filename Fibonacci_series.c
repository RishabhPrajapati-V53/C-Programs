//Fibonacci series - 0,1,1,2,3,5,8,13
//The sum of two consecutive terms makes the third term 

#include<stdio.h>
void main()
{
   int term1 = 0,term2 = 1,nextTerm,n,i;
   printf("Enter the number of terms : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    printf(" %d ",term1);
    term1 = term2;
    term2 = nextTerm;
    nextTerm = term2+term1;
   }

   
}
