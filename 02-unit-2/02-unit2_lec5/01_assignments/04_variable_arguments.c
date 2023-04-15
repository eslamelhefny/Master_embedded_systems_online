#include<stdio.h>
#include<stdarg.h>

void print_Strings(int count , ...);

int main()
{
print_Strings(3 ,"hello" , "eslam" , "ahmed");

  return 0;
}
void print_Strings(int count , ...)
{
  va_list arg;  //variable to save argument list 
  va_start(arg,count);
  for(int i = 0 ; i < count ; i++)
  {
    char * str = va_arg(arg , char*);
    printf("%s",str);
  }
  va_end(arg);
  

}