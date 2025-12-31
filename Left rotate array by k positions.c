#include <stdio.h>

int main() {
    int a[100], n, k, i, temp[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    k = k % n;   // handle k > n

    for(i = 0; i < n; i++)
        temp[i] = a[(i + k) % n];

    for(i = 0; i < n; i++)
        a[i] = temp[i];

    printf("Left rotated array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
