/*
write a C program to check if the number is positive or nrgative 
*/
#include<stdio.h>
void main ()
{
    int var1;
    printf("Enter a Number  : ");
    scanf("%d",&var1);

    if ( var1 > 0)
    {
        printf("the number is positive \n");
    }
    else if (var1<0){
            printf("the number is negative \n");
        }
        else 
{
    printf("the number is equal to zero \n");
}
    
}