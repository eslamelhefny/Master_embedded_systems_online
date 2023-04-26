
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
  char name[20];
  int age;
}person;

int main(){
// create array of pointer to person 

person * p1 = malloc(sizeof(person));
person * p2 = malloc(sizeof(person));
person * p3 = malloc(sizeof(person));

person * people[3] = {p1 , p2 , p3};

p1->age = 20;
strcpy(p1->name , "eslam");

p2->age = 30;
strcpy(p2->name , "ahmed");

p3->age = 40;
strcpy(p3->name , "mohamed");

// create a pointer to array of person of pointers 
person ** ptr_people = people ;


// Access and print the values of the Person structs using the pointer to the array
for(int i = 0 ; i < 3 ; i++)
{
  printf("Persion Id %d:\n",i+1);
  printf("Name : %s\n", ptr_people[i]->name );
  printf("age: %d\n", ptr_people[i]->age);
}
    // Free the memory allocated for the Person structs
    free(p1);
    free(p2);
    free(p3);

  return 0;
}
