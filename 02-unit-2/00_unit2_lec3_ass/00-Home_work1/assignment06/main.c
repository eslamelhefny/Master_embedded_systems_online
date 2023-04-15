// EX7:
// it is an interview trick

// Write Source Code to Swap Two Numbers without temp variable.

#include<stdio.h>
void main ()
{
    int  var1,var2;
    printf("Enter value of a: ");
    scanf("%d",&var1);
    printf("Enter value of b: ");
    scanf("%d",&var2);
    // Swapping process 
    var1 ^=var2;
    var2 ^=var1;
    var1 ^=var2;

    printf("After swapping, value of a = %d \n",var1);
    printf("After swapping, value of b = %d \n",var2);
  
int i = 0 , j = 1 ,k=2 ,m ;
m = i++ || j++ || k++ ;
printf("%d %d %d %d",i,j,k,m);
 int a = 1 , b = 0 ;
 b = a++ + a++ ;

 printf("%d %d",a,b);

// printf("%x",a);
}
