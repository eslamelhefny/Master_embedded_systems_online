// we want to write C program that
// find sum two matrices that they are 2d
// Size of each matrix is 2 X 2
#include <stdio.h>
void main()
{
  int mat1[2][2];
  int mat2[2][2];
  int sum[2][2];

  int i, j;
  // fill the first matrix
  printf("Enter the Element of the first Matrix \n");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      printf("Enter a %d %d ", i, j);
      scanf("%d", &mat1[i][j]);
    }
  }

  // fill second array
  printf("Enter the Element of the Second Matrix \n");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      printf("Enter a %d %d ", i, j);
      scanf("%d", &mat2[i][j]);
    }
  }

  // adding first matrix to second matrix
  // print the summation
  printf("Sum of matrix : \n");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {

      sum[i][j] = mat1[i][j] + mat2[i][j];
      printf("%d  ", sum[i][j]);
    }
    printf("\n");
  }
}
