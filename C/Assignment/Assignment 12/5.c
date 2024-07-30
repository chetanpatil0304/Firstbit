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


    alternatenum(arr,size);

}
void alternatenum (int * arr , int size){


    printf("Alternate Elements in array");

     for(int j = 0 ; j< size ; j=j+2){

        printf("%d\n",arr[j]);
           
    }
    
}