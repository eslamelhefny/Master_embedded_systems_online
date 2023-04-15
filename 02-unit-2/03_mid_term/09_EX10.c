#include <stdio.h>
#include <string.h>

int max_ones_between_zeros(char* str) {
    int max_ones = 0;
    int current_ones = 0;
    int found_zero = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '1') {
            current_ones++;
        } else if (str[i] == '0') {
            if (found_zero && current_ones > max_ones) {
                max_ones = current_ones;
            }
            current_ones = 0;
            found_zero = 1;
        }
    }

    return max_ones;
}

int main() {
    char* str = "1100011100101010";
    int max_ones = max_ones_between_zeros(str);
    printf("The maximum number of ones between two zeros is %d\n", max_ones);
    return 0;
}
