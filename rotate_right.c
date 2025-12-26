#include <stdio.h>

int main() {
    int n, i, temp;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Store last element
    temp = arr[n - 1];

    // Shift elements to right
    for (i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Place last element at beginning
    arr[0] = temp;

    printf("Array after right rotation by 1:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
