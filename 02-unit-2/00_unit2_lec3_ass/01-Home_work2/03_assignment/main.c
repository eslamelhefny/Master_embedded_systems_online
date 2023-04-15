/*
write a C program to find the largest number of three numbers 
*/
#include<stdio.h>
void main ()
{
    int var1,var2,var3,max;
    printf("Enter 3 Numbers  : ");
    scanf("%d %d %d",&var1,&var2,&var3);

    if ( var1 > var2)
    {
        if(var1>var3)
        {
            max = var1;


        }
        else{
            max = var3;

        }
    }
    else if (var2 > var1 ) 
    {
        if(var2 > var3)
        {
            max = var2;
        }
        else{
            max = var3;
        }
    }
    printf("the max is : %d \n",max );
}