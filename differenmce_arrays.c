#include <stdio.h>

int main() {
    int n, i;
    int A[50], B[50], D[50];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of first array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter elements of second array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &B[i]);
    }

    // Finding difference
    for (i = 0; i < n; i++) {
        D[i] = A[i] - B[i];
    }

    printf("Difference of two arrays:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", D[i]);
    }

    return 0;
}
