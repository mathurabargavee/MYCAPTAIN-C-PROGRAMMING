//Write a program in C to find the sum of digits of a number using recursion
//Your Input and Output should look similar to this
//Input Input number: 1234 Output Sum of digits: 10
#include <stdio.h>
int sum(int n)
{
    int r;
    if(n!=0)
    {
    r=n%10;
    return r+sum(n/10);
    }
    else 
    return 0;
    
}
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Sum of digits= %d",sum(n));
    return 0;
}
