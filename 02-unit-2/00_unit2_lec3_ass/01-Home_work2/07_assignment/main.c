/*
write a C program to find the factorial 
*/
#include<stdio.h>
void main ()
{
    int  var1,i ,fac=1;
    printf("Enter A Number : ");
    scanf("%d",&var1);
    for(i=1;i<=var1;i++)
    {
        fac *=i;
    }
    printf("The factorial is = %d\n",fac);
}