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


    evenOdd (arr,5);

}

void evenOdd (int * arr , int size){

    printf("Even numbers");
    for(int j = 0 ; j <size ; j++){

        if(arr[j] % 2 == 0){
             printf(" %d ",arr[j]);
        }
    }
    printf("\n");

    printf("Odd numbers");
    for(int j = 0 ; j <size ; j++){

        if(arr[j] % 2 != 0){
             printf(" %d ",arr[j]);
        }
    }
 


}
