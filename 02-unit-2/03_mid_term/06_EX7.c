#include <stdio.h>

int sum_1_to_100() {
    int n = 100;
    int sum = n * (n + 1) / 2;
    return sum;
}

int main() {
    int sum = sum_1_to_100();
    printf("The sum of the numbers from 1 to 100 is %d\n", sum);
    return 0;
}
