#include<stdio.h>
#define FUN(arg) do\
                  {\
                      if(arg)\
                        printf("eslam","\n");\
                        }while(--i)

// #define SWAP(a,b,c) {c ##t ; #t=a;a=b;b=#t}while(0);
#define SWAP2(a,b) {\
                      a ^= b ; \
                      b ^= a;\
                      a ^= b ; \
                      }while(0);
int main()
{
  int i = 2;
  // FUN(i<3);
  int x = 10 , y = 20 ; 
  SWAP2(x,y);
  printf("%d %d ",x,y);


  return 0;
}