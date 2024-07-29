#include <stdio.h>
void main (){

    int arr [5];

    printf("Enter Array Elements"); 

    for (int i = 0 ; i < 5 ; i ++)
    {
        scanf("%d",&arr[i]);

    }

    alternatenum(arr,5);

}
void alternatenum (int * arr , int size){


    printf("Alternate Elements in array");

     for(int j = 0 ; j< size ; j=j+2){

        printf("%d\n",arr[j]);
           
    }
    
}