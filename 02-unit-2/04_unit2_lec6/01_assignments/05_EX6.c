// write the output 


#include<stdio.h>

union job
{
  char name[32];
  float salary;
  int worker_no;
}u;
struct job1
{
  char name[32];
  float salary;
  int worker_no;
}s;
int main()
{
  printf("size of union is %d\n",sizeof(u));
  printf("size of struct is %d",sizeof(s));


  return 0 ; 
}

// size of union is 32
// size of struct is 40