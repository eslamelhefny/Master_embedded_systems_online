/* program to calculate power of number using recursion */


#include<stdio.h>

int power(int base , int pwr );
int main(){
  int base, pwr;
  printf("Enter base number : ");
  scanf("%d",&base);
  
  printf("Enter power number should be positive : ");
  scanf("%d",&pwr);
  printf(" %d power %d is : %d", base , pwr , power(base , pwr));

  return 0 ; 
}
int power(int base , int pwr )
{
  if (pwr == 0 )
    return 1;
  else if (pwr == 1 )
    return base;    
  else if (pwr < 0  )
  {
    printf("power should be positive");
    return -1;

  }
  else 
    return base * power(base , pwr-1);
}