/*
write a C program to calculate Sum of Natural Numbers 
*/
#include<stdio.h>
void main ()
{
    int  var1,i ,sum=0;
    printf("Enter A Number : ");
    scanf("%d",&var1);
    for(i=1;i<=var1;i++)
    {
        sum+=i;
    }
    printf("Sum = %d\n",sum);
}