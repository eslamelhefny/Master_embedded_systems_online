#include <stdio.h>

int find_unique(int arr[], int size) {
    int unique = 0;

    for (int i = 0; i < size; i++) {
        unique ^= arr[i];
    }

    return unique;
}

int main() {
    int arr[] = { 1, 2, 3, 2, 1 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int unique = find_unique(arr, size);
    printf("The unique number in the array is %d\n", unique);
    return 0;
}
