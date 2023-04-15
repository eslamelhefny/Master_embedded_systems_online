// write a program Adding two complex numbers using structure and function

#include <stdio.h>
#include <string.h>

// struct for complex
struct Scomplex
{
  /* data */
  double m_R; // real part
  double m_I; // imaginary part
};

struct Scomplex ReadComplex(char name[]);
struct Scomplex AddComplex(struct Scomplex a, struct Scomplex b);
void PrintComplex(char name[], struct Scomplex a);

int main()
{
  struct Scomplex X , Y , Z ;
  X = ReadComplex("X");
  Y = ReadComplex("Y");
  Z = AddComplex(X,Y);
  PrintComplex("Z", Z);

  return 0;
}

struct Scomplex ReadComplex(char name[])
{
  struct Scomplex a;

  printf("Enter %s complex value (Ex : 5,-3): ", name);
  scanf("%lf, %lf", &a.m_R, &a.m_I);
  return a;
}
struct Scomplex AddComplex(struct Scomplex a, struct Scomplex b)
{
  struct Scomplex result;

  result.m_R = a.m_R + b.m_R;
  result.m_I = a.m_I + b.m_I;


  return result;
}
void PrintComplex(char name[], struct Scomplex a)
{
  printf("%s complex value is %lf %lf: ", name , a.m_R , a.m_I);
}