#include <stdio.h>
#include <string.h>
void main (){

    int n ;
    printf("Enter the size of the array");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the array elements \n");
    for(int i=0 ; i<n; i++){
        scanf("%d",&arr[i]);
    }

    Sortingarray (arr,n);
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