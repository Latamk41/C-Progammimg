#include <stdio.h>

int main() {
    int arr[100], n, i;
    int largest, secondLargest;
    int smallest, secondSmallest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Initialize
    largest = secondLargest = arr[0];
    smallest = secondSmallest = arr[0];

    // Find largest and smallest
    for(i = 1; i < n; i++) {
        if(arr[i] > largest)
            largest = arr[i];
        if(arr[i] < smallest)
            smallest = arr[i];
    }

    // Find second largest and second smallest
    for(i = 0; i < n; i++) {
        if(arr[i] != largest) {
            if(arr[i] > secondLargest || secondLargest == largest)
                secondLargest = arr[i];
        }
        if(arr[i] != smallest) {
            if(arr[i] < secondSmallest || secondSmallest == smallest)
                secondSmallest = arr[i];
        }
    }

    printf("Second Largest Element = %d\n", secondLargest);
    printf("Second Smallest Element = %d\n", secondSmallest);

    return 0;
}
