/*
write a C program to check whether a Number is Even or Odd 
*/
#include<stdio.h>
void main ()
{
    int  var1;
    printf("Enter an integer you want to check : ");
    scanf("%d",&var1);
    if (var1 % 2==0)
    {
        printf("%d is an even \n ",var1);

    }
    else 
    {
        printf("%d is an odd \n ",var1);
    }
}