#include <stdio.h>

int main()
{
  char *p = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  while (*p != '\0')
  {
    /* code */
    printf("%c\t", *p);
    p++;
  }
  

  return 0;
}