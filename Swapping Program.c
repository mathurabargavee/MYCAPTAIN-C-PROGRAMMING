  
// Program to swap two numbers without using temporary variable
#include <stdio.h>
int main() {
   int a,b;
   printf("Enter 2 numbers: ");
   scanf("%d%d",&a,&b);
   printf("Before Swapping a=%d,b=%d",a,b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("\nAfter swapping,a=%d and b=%d",a,b);
    
    return 0;
}
