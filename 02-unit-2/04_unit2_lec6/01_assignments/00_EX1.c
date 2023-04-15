#include<stdio.h>

struct student
{
  /* data */
  char name[10];
  int roll;
  int mark; 
};



int main()
{
  struct student s1;
  printf("Enter information of students : \n");

  printf("Enter Name : ");
  scanf("%s",&s1.name);
  
  printf("Enter roll number : ");
  scanf("%d",&s1.roll);

  printf("Enter marks: ");
  scanf("%d",&s1.mark);

  printf("display information : \nname : %s \nRoll: %d\nMarks: %d",s1.name,s1.roll,s1.mark );




  return 0 ; 
}