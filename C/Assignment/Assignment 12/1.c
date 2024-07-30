#include <stdio.h>
#include <stdlib.h> // Required for malloc and free

int findmin(int *arr, int size);
int findmax(int *arr, int size);

void main() {
    int *arr;
    int size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    // Allocate memory for the array
    arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed");
        return;
    }

    printf("Enter array elements: ");

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int Minnum = findmin(arr, size);
    int Maxnum = findmax(arr, size);

    printf("The minimum number is %d\n", Minnum);
    printf("The maximum number is %d\n", Maxnum);

    // Free the allocated memory
    free(arr);
}

int findmin(int *arr, int size) {
    int min = arr[0];

    for (int j = 1; j < size; j++) {
        if (arr[j] < min) {
            min = arr[j];
        }
    }
    return min;
}

int findmax(int *arr, int size) {
    int max = arr[0];

    for (int j = 1; j < size; j++) {
        if (arr[j] > max) {
            max = arr[j];
        }
    }
    return max;
}
