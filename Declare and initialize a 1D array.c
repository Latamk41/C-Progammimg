#include <stdio.h>

int main() {
    // Declare and initialize a 1D array
    int numbers[5] = {10, 20, 30, 40, 50};

    // Print the array elements
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d = %d\n", i, numbers[i]);
    }

    return 0;
}
