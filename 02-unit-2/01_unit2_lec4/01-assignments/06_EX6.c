// at assignment we want to make strlen implemetation
#include<stdio.h>
#include<string.h>

#define NUM_OF_ELEMENTS 100

void main()
{
  char str_arr[NUM_OF_ELEMENTS];
  int i = 0; 
  printf("Please Enter a string \n");
  scanf("%s",&str_arr);

  while(str_arr[i]!='\0')
  {

      i++;
  }
  printf("length of string is %d ",i);


}