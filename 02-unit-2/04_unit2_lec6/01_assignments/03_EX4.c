// now create array of students and each of them is struct 
// then display them 

#include <stdio.h>


struct  student
{
  /* data */
  char name[20];
  int marks;
};


int main()
{
  int i =0;
  struct student s_arr[10];
  printf("Enter Information of students : \n");
  for( i = 0 ; i < 10 ; i++)
  {
    printf("For roll number %d\n",i+1);
    printf("Enter name ");
    scanf("%s",&s_arr[i].name);
    
    printf("Enter marks ");
    scanf("%s",&s_arr[i].marks);

  }
  printf("Displaying Information of students : \n");
  for( i = 0 ; i < 10 ; i++)
  {
    printf("Information for roll number %d\n",i+1);
    printf("name :%s\n",s_arr[i].name);
    
    printf(" marks :%d\n",s_arr[i].marks);

  }

  return 0;
}