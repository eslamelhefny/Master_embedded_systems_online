// function to print all prime numbers between two numbers
#include <stdio.h>
#include <stdbool.h>
// define functuions that we use
void print_prime_number(int a, int b);
bool is_prime(int a);
int main()
{
  int a, b;
  printf("Enter two number (intercvals)");
  scanf("%d %d", &a, &b);
  printf("Prime numbers between %d and %d is \n", a, b);
  print_prime_number(a, b);
  return 0;
}
void print_prime_number(int a, int b)
{
  int counter = 0;
  for (counter = a; counter <= b; counter++)
  {
    if (is_prime(counter))
    {
      printf("%d  ", counter);
    }
  }
}
bool is_prime(int a)
{
  int flag = 0, i = 0;
  for (i = 2; i < a / 2; i++)
  {
    if (a % i == 0) // so i can devide a
    {
      flag = 1;
      break;
    }
  }
  if (!flag)
  {
    return true;
  }
  else
  {
    return false;
  }
}
