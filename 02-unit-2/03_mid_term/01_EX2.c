// c function to take number and calculate it's square root 

#include <stdio.h>

float my_sqrt(float num );


int main()
{
    int x = 25;
    double root = my_sqrt(x);
    printf("The square root of %d is %f\n", x, root);
  return 0 ;
}
float my_sqrt(float num )
{
    double guess = (double) num / 2.0;
    double prev_guess = 0.0;

    while (guess != prev_guess) {
        prev_guess = guess;
        guess = (guess + num / guess) / 2.0;
    }

    return guess;
}