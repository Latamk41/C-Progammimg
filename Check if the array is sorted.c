#include <stdio.h>

int main() {
    int arr[100], n, i;
    int sorted = 1;   // Assume array is sorted

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            sorted = 0;
            break;
        }
    }

    if(sorted)
        printf("The array is sorted in ascending order.\n");
    else
        printf("The array is NOT sorted.\n");

    return 0;
}
