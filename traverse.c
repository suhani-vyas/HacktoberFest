#include <stdio.h>

int main() {
    int arr[100], n, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Array elements are:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nEnter position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    for (int i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;

    printf("Array after deletion:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
