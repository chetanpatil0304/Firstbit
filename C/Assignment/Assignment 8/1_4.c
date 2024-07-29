#include <stdio.h>
void main (){

    int arr [5];
    int flag = 0 ;

    printf("Enter Array Elements"); 

    for (int i = 0 ; i < 5 ; i ++)
    {
        scanf("%d",&arr[i]);

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
