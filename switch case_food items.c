/*ORDER:
1 Pizza, Rs 239
2 Pasta,Rs 179
3 Burger, Rs 129
4 French Fries, Rs 99
5 Sandwich, Rs 149
*/
#include <stdio.h>

int main()
{
    int n=0;
    printf("MENU");
    printf("\n1.Pizza - Rs 239\n2.Pasta - Rs 179 \n3.Burger - Rs 129\n4.French Fries - Rs 99\n5.Sandwich - Rs 149");
    printf("\nEnter any number from 1 to 5: ");
    scanf("%d",&n);
    switch(n)
  {
    case 1:printf("\nFood item:Pizza\nPrice:Rs 239");
           break;
    case 2:printf("\nFood item:Pasta\nPrice:Rs 179");
           break;
    case 3:printf("\nFood item:Burger\nPrice:Rs 129");
           break;
    case 4:printf("\nFood item:French Fries\nPrice:Rs 99");
           break;
    case 5:printf("\nFood item:Sandwich\nPrice:Rs 149");
           break;
    default:printf("\nInvalid choice.Enter number between 1 to 5.");
  }
  return 0;
}
