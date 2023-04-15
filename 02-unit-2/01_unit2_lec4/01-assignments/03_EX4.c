// we want to write a program to insert an element in array
// in this case we need to change the size of array
// but we know that array size should be constant
// we suppose that max Size is 100 element
#include <stdio.h>
#define NUM_OF_ELEMENTS 100
void main()
{
  int i, num_of_elements, elem, location;
  int arr[NUM_OF_ELEMENTS];
  int arr2[NUM_OF_ELEMENTS];
  printf("Enter no of elements : ");
  scanf("%d", &num_of_elements);
  printf("Enter Elements of this array : ");
  for (i = 0; i < num_of_elements; i++)
  {
    printf("Enter element of %d ", i);
    scanf("%d", &arr[i]);
  }
  printf("Enter element to be inserted : ");
  scanf("%d", &elem);

  printf("Enter index of the element");
  scanf("%d", &location);
  int j = 0;
  if(location > num_of_elements+1)
    printf("index is out of range ");
  for (i = 0; i < num_of_elements + 1; i++)
  {
    if (i == location)
    {
      arr2[i] = elem;
    }
    else
    {
      arr2[i] = arr[j];
      j++;
    }

    printf("%d\t ", arr2[i]);
  }
}