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

 

    int search ;
    printf("Enter the number to search");
    scanf("%d",&search);

    int result = tofind(arr ,search ,size);

    if(result==1){
        printf("Number is found");
    }else {
        printf("Number is not found");
    }
  

}
int tofind ( int * arr , int search , int size){


      for(int j = 0 ; j < size ; j++){
        if(arr[j]==search){
            return 1 ;
        
    }
    return 0  ;
    }

 }