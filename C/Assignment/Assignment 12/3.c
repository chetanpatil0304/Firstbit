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


    int result = sumElements(arr,size);

    printf("Sum of all array is %d",result);

}


int sumElements (int * arr , int size){

    int sum = 0 ;

    for(int j = 0 ; j <size ; j++){

        sum=sum + arr [j];


    }
    return sum ;

}


