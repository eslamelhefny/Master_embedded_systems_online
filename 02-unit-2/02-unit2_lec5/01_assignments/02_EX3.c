/*  program to reverse string using recursion */

#include<stdio.h>
#include<string.h>

void reverse_string(char str[] , int start , int end);
int main(){
    char str[100];
    

    printf("Enter a string: ");
    scanf("%s", str);

    reverse_string(str, 0, strlen(str) - 1);

    printf("Reversed string: %s", str);
  return 0 ; 
}
void reverse_string(char str[] , int start , int end)
{
  if(start >= end )
  return ;

  // swap characters at start and end 
  char tmp =str[start];
  str[start] = str[end];
  str[end] = tmp;
  reverse_string(str , start+1 , end - 1);
}