#include<stdio.h>
int main()
{
    int marks[][4] = {{11,22,33,44},{77,88,55,66}},i,j;
  /*  for(i = 0;i < 4;i++)
    { 
    printf("Enter the value of [%d][%d] element of the array : \n",i,j);
    scanf("%d",&marks[i][j]);
    }*/
    for(i = 0;i < 2;i++)
    {
        for(j = 0; j < 4; j++)
        {
            /* code */
        
        
      // printf("The value of [%d][%d] element of the array is : %d\n",i,j,marks[i][j]);
       printf("%d  ",marks[i][j]);
        }
        printf("\n");
    }
   /* marks[0] = 34;
    printf("The marks of student 1 is %d\n",marks[0]);
    marks[1] = 69;
    printf("The marks of student 2 is %d\n",marks[1]);
    marks[2] = 42;
    printf("The marks of student 3 is %d\n",marks[2]);
    marks[5] = 72;
    printf("The marks of student 4 is %d\n",marks[5]);*/
    return 0;
}