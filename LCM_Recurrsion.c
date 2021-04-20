/*Write a program in C to find the LCM of two numbers using recursion
The input and output for your program should look similar to this
Input Input first number: 12
Input second number: 30 
Output LCM of 12 and 30 = 60*/

#include<stdio.h>
int find_lcm(int, int);   // function prototype declaration

int main()
{
    int a, b, lcm;
    printf("Enter 2 integers to find LCM of:\n");
    scanf("%d%d", &a, &b);
    lcm = find_lcm(a,b);    // function call
    printf("\nLCM of %d and %d is: %d\n", a, b, lcm);
    return 0;
}

int find_lcm(int a, int b)  // function definition
{
    /*
        static variable is initialized only once 
        for each function call
    */
    static int temp = 1;    
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        find_lcm(a,b);
        return temp;
    }
}
