#include <stdio.h>

int main() {
    int n, i, flag = 1;
    int arr1[100], arr2[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of first array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of second array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    /* Compare arrays */
    for (i = 0; i < n; i++) {
        if (arr1[i] != arr2[i]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("Both arrays are equal\n");
    else
        printf("Arrays are not equal\n");

    return 0;
}
