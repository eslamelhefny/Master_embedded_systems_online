/*
write a C program to Make a Simple Calculator to Add , Subtract , Multiply or devide 
*/
#include<stdio.h>
void main ()
{
    int  var1,var2 ,result;
    char choice ;
    printf("Enter Operator either + or - or * or / :- ");
    scanf("%c",&choice);
    printf("enter 2 operators :");
    scanf("%d %d",&var1,&var2);
    switch (choice)
    {
    case '+':
        /* code */
        printf("%d + %d = %d\n",var1,var2,var1+var2);
        break;
    case '-':
        printf("%d - %d = %d\n",var1,var2,var1-var2);
        /* code */
        break;
    case '*':
        printf("%d * %d = %d\n",var1,var2,var1*var2);
        /* code */
        break;
    case '/':
        printf("%d / %d = %d\n",var1,var2,var1/var2);
        /* code */
        break;
    
    default:
    printf("wrong operater \n");
        break;
    }
}
