/*
Write a program in C to check a number is a prime number or not using recursion
Your Input and Output should look aimilar to this
Enter a number: 456 456 is not a prime number
*/
#include <stdio.h>
int prime(int n,int i)
{
   
   if(i==1)
   return 1;
   else
   {
       if(n%i==0) //divisible by any other number
       return 0;
       else
        prime(n,i-1);
   }
    
}
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int flag=prime(n,n/2);
    if(flag==0)
    printf("%d is not a prime number",n);
    else
    printf("%d is a prime number",n);
    return 0;
}
