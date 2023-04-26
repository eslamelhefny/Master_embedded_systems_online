#include<stdio.h>


int main(){


  int m =29; 
  int * ap = &m ; 

  printf("Address of m is : %x\n", &m);
  printf("value of m is : %d\n", m);
  
  printf("Now ap is assigned with the address of m \n");

  printf("Address of pointer ap is : %x\n", ap);
  printf("value of pointer ap is : %d\n",*ap);
  

  m = 34;

  printf("The value of m assigned to 34 now. \n");

  printf("Address of pointer ap : %x\n", &ap);
  printf("value of pointer ap is : %d\n",*ap);


  *ap = 7;

  printf("The pointer variable ab is assigned with the value 7 now. \n");
  printf("Address of m is : %x\n", &m);
  printf("value of m is : %d\n", m);
  
  


  return 0;
}