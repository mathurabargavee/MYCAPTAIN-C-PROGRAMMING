/*
Write a C program to initialize a 3x3 array, insert elements into the array, read and print an array of elements using only pointers. Also find and print the sum of all diagonal elements.

Your input and Output should look similar to this

Input elements in the matrix : element - [0],[0] : 1 element - [0],[1] : 2 element - [0],[2] : 3 element - [1],[0] : 4 element - [1],[1] : 5 element - [1],[2] : 6 element - [2],[0] : 7 element - [2],[1] : 8 element - [2],[2] : 
9 The matrix is : 1 2 3 4 5 6 7 8 9
*/
#include<stdio.h>
int main()
{
    int i,j,arr[10][10],k=0,*b;
    b=&arr;
    int sum=0;
    printf("Enter elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",(b+i+j));
        }
        
    }
    printf("\nMATRIX IS:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
       {
        printf("%d  ",*(b+i+j));
       }
      printf("\n");
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            k++;
            printf("Element-[%d][%d]: %d element-%d\n",i,j,k,*(b+i+j));
            if(i==j)
            {
            sum+=*(b+i+j);
            }
        }
    }
    printf("Sum of diagonals is:%d",sum);
    return 0;
}
    
