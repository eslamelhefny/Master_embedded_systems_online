#include<stdio.h>

int main()
{
  // max size is 15 
  int arr[15];
  int num_of_elm = 0 ; 
  int *p = arr;  
  printf("Enter the number of elements in the array to store in array max is 12 \n");
  scanf("%d",&num_of_elm);

  // take input of user 
  for(int i = 0 ; i < num_of_elm ; i++)
  {
  printf("Elment-%d:  ",i);
  scanf("%d",&arr[i]);
  }


  printf("The elements of array in reverse order are : \n");

  // take input of user 
  for(int i = 0 ; i < num_of_elm ; i++)
  {
  // printf("Elment-%d : %d\n",i,p[num_of_elm - i - 1]);
  printf("Elment-%d : %d\n",i,*(p + num_of_elm - i - 1));
  }
  return 0; 
}