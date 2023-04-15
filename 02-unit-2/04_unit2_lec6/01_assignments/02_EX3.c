// write program to add two complex numbers 


#include <stdio.h>

struct com_number{
  float reel; 
  float imag;
};

struct com_number Add_complex(struct com_number a, struct com_number b);
int main(){
  struct com_number a,b,c;
  printf("For 1st Complex nember \nEnter Real and Imaginary Respectively: ");
  scanf("%f %f",&a.reel,&a.imag);
  
  printf("For 2nd Complex nember \nEnter Real and Imaginary Respectively: ");
  scanf("%f %f",&b.reel,&b.imag);
  c = Add_complex(a,b);
  printf("Sum = %0.2f + %0.2f i",c.reel,c.imag);

  return 0;
}
struct com_number Add_complex(struct com_number a, struct com_number b){

  struct com_number c;
  c.imag = a.imag + b.imag;
  c.reel = a.reel + b.reel;


  return c;
}