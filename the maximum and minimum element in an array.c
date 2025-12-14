#include <stdio.h>

int main() {
    int arr[5] = {10, 25, 5, 40, 15};
    int max, min;

    max = min = arr[0];   // Initialize both with first element

    for (int i = 1; i < 5; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);

    return 0;
}
