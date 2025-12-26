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

    // Store first element
    temp = arr[0];

    // Shift elements to left
    for (i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Place first element at end
    arr[n - 1] = temp;

    printf("Array after left rotation by 1:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
