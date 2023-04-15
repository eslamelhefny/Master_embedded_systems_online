/*
write a C program to check wether a character is a alphabet or not 
*/
#include<stdio.h>
void main ()
{
    char  var1;
    printf("Enter A character : ");
    scanf("%c",&var1);

    if(((var1 >= 'a')&&(var1<='z') )|| ((var1>='A')&&(var1<='Z')) )
    {
        printf(" %c is alphabet \n",var1);
    }
    else 
    {
        printf(" %c is Not alphabet \n",var1);
    }
    
}