#include <stdio.h>

int main() {
    int a[2][2], i, j;

    printf("Enter 4 elements of the matrix:\n");

    // Reading matrix
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMatrix is:\n");

    // Printing matrix
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
