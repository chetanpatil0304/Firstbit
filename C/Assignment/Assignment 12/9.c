#include <stdio.h>
void main (){
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

    reversearray (arr,size);

}

void reversearray (int * arr1 , int size){

    printf("Reverse of array is\n"); 
    for (int i = 4 ; i >=0 ; i--)
    {
        printf("%d\n",arr1[i]);


    }

}
