#include <stdio.h>

int main()
{
    int marks;
    printf("Enter Marks: ");
    scanf("%d",&marks);
    if(marks>=85 && marks<=100)
    printf("\nGrade A.");
    if(marks>=70 && marks<=84)
    printf("\nGrade B.");
    if(marks>=55 && marks<=69)
    printf("\nGrade C.");
    if(marks>=40 && marks<=54)
    printf("\nGrade D.");
    if(marks<40)
    printf("\nGrade F.");
    
   return 0;
}
