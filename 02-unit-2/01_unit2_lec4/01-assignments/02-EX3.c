// this program is to transpose materix 
// user should enter size of the matrix 
// then transopose it 
#include<stdio.h>
void main()
{
  int mat_width , mat_hight; 
  int arr[100][100];
  int i , j;
  // get matrix diamention from user 
  printf("Enter Rows of matrix : ");
  scanf("%d",&mat_width);
  printf("Enter Col of matrix : ");
  scanf("%d",&mat_hight);
  // get matrix elements from user 
  printf("Enter Elements of matrix\n");
  for(i = 0 ; i<mat_width ; i++)
  {
    for(j = 0 ; j < mat_hight ; j++)
    {
      printf("Enter Element of %d %d: ",i,j);
      scanf("%d",&arr[i][j]);
    }
  }
  // print original  matrix 
  printf("Entered matrix : \n");
  for(i = 0 ; i<mat_width ; i++)
  {
    for(j = 0 ; j < mat_hight ; j++)
    {
      printf("%d  ",arr[i][j]);
    }
    printf("\n");
  }
  // print transposed matrix 
printf("Transpose matrix : \n");  
  for(j = 0 ; j<mat_hight ; j++)
  {
    for(i = 0 ; i < mat_width ; i++)
    {
      printf("%d  ",arr[i][j]);
    }
    printf("\n");
  }
  
  
}