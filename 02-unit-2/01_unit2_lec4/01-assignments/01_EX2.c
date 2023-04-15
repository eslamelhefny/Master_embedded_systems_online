// C program that Calculate Average of array 
// take # of elements from user 
// store data in array 
// calculate the average 
#include<stdio.h>
void main ()
{
  int num_of_elements;
  int i = 0 ;
  float sum = 0 ;
  // we suggest that max number of elements is 100
  float arr [100];
  // GET NUMBER OF ELEMENTS FROM USER 
  printf("Enter number of elemnts :");
  scanf("%d",&num_of_elements);
  for(i = 0 ; i<num_of_elements ; i++)
  {
    printf("%d Enter a number : ",i );
    scanf("%f",&arr[i]);
    sum += arr[i];

  }
  // to get the average value 
  printf("Sum is : %f\n", sum);
  printf("Average is : %f", sum/num_of_elements);




}