#include <stdio.h>
void main (){
    int *arr1 , *arr2;
    int size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    // Allocate memory for the array
    arr1 = (int *)malloc(size * sizeof(int));
    arr2 = (int *)malloc(size * sizeof(int));

    if (arr1 == NULL && arr2 == NULL) {
        printf("Memory allocation failed");
        return;
    }

    printf("Enter First array elements: ");

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }

        printf("Enter Second array elements: ");

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }


    sumarray(arr1,arr2,size);

}

void sumarray(int * arr1 ,int * arr2,int size){

    int sum [size] ;

    printf("Sum of array is \n");

    for (int k = 0 ; k <7 ; k++){
        sum [k] =arr1[k]+arr2[k];
        printf("%d\n",sum[k]);
    }


}
