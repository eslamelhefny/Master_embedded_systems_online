#include <stdio.h>
#define COL_SIZE 5
#define RAW_SIZE 5

void main()
{
  int i, j;

  int two_d_array[COL_SIZE][RAW_SIZE];
  for (i = 0; i < RAW_SIZE; i++)
  {
    for(j=0 ; j<COL_SIZE ; j++)
    {

      printf("Enter Element of row %d and col %d " , i,j);
      scanf("%d",&two_d_array[i][j]);
    }
  }
  for (i = 0; i < RAW_SIZE; i++)
  {
    for(j=0 ; j<COL_SIZE ; j++)
    {

      printf("%d    " , two_d_array[i][j]);
    }
    printf("\n");
  }
  printf("So matrix Transpose is : \n");
  
  for (i = 0; i < RAW_SIZE; i++)
  {
    for(j=0 ; j<COL_SIZE ; j++)
    {

      printf("%d    " , two_d_array[j][i]);
    }
    printf("\n");
  }
  
  
}