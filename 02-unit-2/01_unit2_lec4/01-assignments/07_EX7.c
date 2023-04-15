// at assignment we want to reverse string 
#include <stdio.h>
#include<string.h>

#define NUM_OF_ELEMENTS 100

void main()
{
  char str_arr[NUM_OF_ELEMENTS];
  int i = 0; 
  printf("Please Enter a string : ");
  scanf("%s",&str_arr);
printf("string reverse is : ");
for(i=strlen(str_arr) ; i>=0 ; i--)
{
  printf("%c",str_arr[i]);
}

}