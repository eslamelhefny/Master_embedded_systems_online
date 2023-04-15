// function to reverse digits in c 

#include <stdio.h>

int reverse_number(int a );

int main(){
  int a;
  printf("Enter  number ");
  scanf("%d", &a );
  printf("reverse of this digit is : %d " , reverse_number(a));
  return 0;
}
int reverse_number(int a ){

int result =0 ; 
while(a != 0 )
{
  result = result *10 + (a%10);
  a /=10;
}
return result;
}