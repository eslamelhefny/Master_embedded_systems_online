// C program to add two distances in inch - feet 

#include<stdio.h>

struct dis{
  float feet ; 
  float inch ;
};
struct dis Add_distance(struct dis a ,struct dis b );

int main()
{
  struct dis a,b,c;
  printf("Enter information of first distance : \n");
  printf("Enter feet : \n");
  scanf("%f",&a.feet);
  printf("Enter inch : \n");
  scanf("%f",&a.inch);
  

  printf("Enter information of second distance : \n");
  printf("Enter feet : \n");
  scanf("%f",&b.feet);
  printf("Enter inch : \n");
  scanf("%f",&b.inch);
  c = Add_distance(a,b);
  printf("Sum of distances %f - %f:  \n",c.feet,c.inch);


  return 0;
}

struct dis Add_distance(struct dis a ,struct dis b )
{
  struct dis res;

  res.feet = a.feet + b.feet;
  res.inch = a.inch + b.inch;
  if(res.inch >= 12 )
  {
    res.inch =res.inch - 12;
    res.feet = res.feet +1;
  }
  return res;
}