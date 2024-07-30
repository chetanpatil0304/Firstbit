#include <stdio.h>
#include <string.h>
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


    Sortingarray (arr,size);
}

void Sortingarray(int * arr ,int n){

    int temp = 0 ;

    for (int i=0 ; i <n ; i++){

        for (int j =i+1 ; j<n ; j++){

            if(arr[i]>arr[j]){

                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;

            }

            
        }
    }

    printf("Array After Sorting ");
    for(int i=0 ; i<n ;i++){
        printf(" %d ",arr[i]);
    }


    
}