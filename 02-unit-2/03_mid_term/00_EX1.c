// function to take a number and sum all digits 


#include<stdio.h> 

int sum_digits(int a );


int main (){
  int num ;
  printf("enter a number : "); 
  scanf("%d",&num);
  printf("sum of digits is %d " , sum_digits(num));

  return 0; 
}
int sum_digits(int a )
{
  int sum = 0 ; 
  while (a !=0 )
  {
    /* code */
    sum += (a%10);
    a/=10;
  }
  return sum;
  
}