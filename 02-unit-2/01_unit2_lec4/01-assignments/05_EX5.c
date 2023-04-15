// frequency of characteres of string 
// ask user to enter a string 
// ask s user to enter a character 
// then print number of occuerences of this character 
#include<stdio.h>
#include<string.h>
#define NUM_OF_ELEMENTS 100

void main()
{
  char ch;
  char str_arr[NUM_OF_ELEMENTS];
  int i = 0 ,counter = 0 ; 
  printf("Please Enter a string \n");
  scanf("%s",&str_arr);
  // printf("\n%s\n",str_arr);
  printf("Eneter a characeter to search \n");
  fflush(stdin);fflush(stdout);
  scanf("%c",&ch);
  // printf("\n%c\n",ch);
  // ch = getchar();
  for(i=0;i<strlen(str_arr);i++)
  {
    if(str_arr[i] == ch)
    {
      counter++;
    }
  }
  printf("Frequency of %c = %d ",ch , counter);


}