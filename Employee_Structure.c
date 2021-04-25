#include <stdio.h>
struct Employee
{
    char name[20],dept[50];
    int age;
    long int phno;
    float sal;
};
void output(struct Employee s)
{
    
    printf("%s\t%d\t%ld\t%s\t%f\n",s.name,s.age,s.phno,s.dept,s.sal);
}
int main()
{
    int i;
    struct Employee e[20];
    for(int i=0;i<20;i++)
       { printf("Enter Employee %d Name: ",i+1);
        scanf("%s",e[i].name);
        printf("Enter Employee %d Age: ",i+1);
        scanf("%d",&e[i].age);
        
        printf("Enter Employee %d Phone Number: ",i+1);
        scanf("%ld",&e[i].phno);
       printf("Enter Employee %d Department: ", i+1);
        scanf("%s",e[i].dept);
        printf("Enter Employee %d salary: ",i+1);
        scanf("%f",&e[i].sal);
        printf("\n");
       }
    printf("NAME\tAGE\tPHONE NUMBER\tDEPARTMENT\t\tSALARY\n");
    for(i=0;i<20;i++)
    output(e[i]);
    return 0;
}

