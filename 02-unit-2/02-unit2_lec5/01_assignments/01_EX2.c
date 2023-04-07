/* ********************************* program to find factorial ***********************************/
#include <stdio.h>

int factorial(int a);

int main()
{
  int a; 
  printf("Enter an positive integer : ");
  scanf("%d",&a);
  printf("factorial of %d is : %d" ,a,factorial(a));

  return 0;
}

int factorial(int a)
{
  if (a == 0)
    return 0;
  else if (a == 1)
    return 1;
  else
    return a * factorial(a - 1);
}