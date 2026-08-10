#include <stdio.h>

void main() {
    int arr[10], n, pos, element, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
