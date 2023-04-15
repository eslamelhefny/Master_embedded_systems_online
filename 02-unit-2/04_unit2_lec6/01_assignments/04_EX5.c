// program to find circle area with macro 


#include<stdio.h>

#define CIRCLE_AREA(R)    R*R*3.14

int main()
{
  float radius;
  printf("Enter the radius: \n");
  scanf("%f",&radius);
  printf("area is : %f",CIRCLE_AREA(radius));

  return 0;
}