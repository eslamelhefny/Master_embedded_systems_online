#include <stdio.h>

int count_ones(int num) {
    int count = 0;

    while (num != 0) {
        if (num & 1) {
            count++;
        }
        num >>= 1;
    }

    return count;
}

int main() {
    int num = 5;
    int ones = count_ones(num);
    printf("The number of ones in the binary representation of %d is %d\n", num, ones);
    return 0;
}