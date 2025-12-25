#include <stdio.h>

int main() {
    int A[50], B[50], C[100];
    int n1, n2, i, j;

    // Read size of first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    // Read elements of first array
    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &A[i]);
        C[i] = A[i];   // Copy into third array
    }

    // Read size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    // Read elements of second array
    printf("Enter elements of second array:\n");
    for (j = 0; j < n2; j++) {
        scanf("%d", &B[j]);
        C[i + j] = B[j];  // Append after first array
    }

    // Print merged array
    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
