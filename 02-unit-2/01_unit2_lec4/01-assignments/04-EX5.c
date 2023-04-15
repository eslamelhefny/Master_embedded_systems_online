// we want to enter an array 
// then user enter element to search 
// if we find it print found and element index
// if not print we didn't find it 
#include<stdio.h>
#define NUM_OF_ELEMENTS 100
void main()
{
  int flag = 0;
  int i, num_of_elements, elem, location;
  int arr[NUM_OF_ELEMENTS];
  printf("Enter no of elements : ");
  scanf("%d", &num_of_elements);
  printf("Enter Elements of this array : ");
  for (i = 0; i < num_of_elements; i++)
  {
    printf("Enter element of %d ", i);
    scanf("%d", &arr[i]);
  }
  printf("Enter element to search : ");
  scanf("%d", &elem);

  for (i = 0; i < num_of_elements ; i++)
  {
    if (arr[i] == elem)
    {
      flag = 1 ;
    }
  }
  if(flag)
    printf("Founded at index %d ",i);
  else 
    printf("element dosen't exist \n");


}