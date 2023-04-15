// shows how to scan 10
// students degree from user,
// stores them in a single
// area, and then prints them.

#include<stdio.h>
#define ARR_SIZE 10
void main()
{
  int i = 0 ;
  float students_arr[ARR_SIZE];
  // get the vales from user 
  for(i=0; i<ARR_SIZE ; i++)
  {
    printf("Enter Student %d degree : ",i);
    // fflush(stdin); fflush(stdout);
    scanf("%f",&students_arr[i]);
  }
  // print values to user 
  for(i=0 ; i < ARR_SIZE ; i++)
  {
    printf("Student %d is %0.2f \n" , i , students_arr[i]);
  }

}