#include <stdio.h>

int main() {
    int arr[50], n, i, j = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Move non-zero elements to front
    for (i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j++] = arr[i];
        }
    }

    // Fill remaining positions with zero
    while (j < n) {
        arr[j++] = 0;
    }

    printf("Array after shifting zeros:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
