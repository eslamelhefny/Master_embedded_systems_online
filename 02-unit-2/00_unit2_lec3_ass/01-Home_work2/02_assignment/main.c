/*
write a C program to check vowel or constant 
*/
#include<stdio.h>
#include<ctype.h>
void main ()
{
    char var1;
    printf("Enter an alphabet : ");
    scanf("%c",&var1);
// this condition to check that the char is alphabet 
    if (isalpha(var1))
    {
        switch (var1)
        {

        
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        {
            printf("%c is a Vowel \n ",var1);
            break;
        }
        default:
        {
            printf("%c is a Constant \n",var1);

            break;
        }
        }

    }
    else 
    {
        printf("this not alpha ");
    }
}