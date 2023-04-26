

#include <stdio.h>

int main()
{
  char *p = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int couter = 0 ; 
  while (*p != '\0')
  {
    /* code */
    p++;
    couter++;

  }
  p--;

  while (couter>=0)
  {
    /* code */
    printf("%c \t",*p);
    p--;
    couter--;
    
  }

  return 0;
}