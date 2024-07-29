#include <stdio.h>
void main (){

    int arr [5];

    printf("Enter Array Elements"); 
    for (int i = 0 ; i < 5 ; i ++)
    {
        scanf("%d",&arr[i]);

    }

    int result = sumElements(arr,5);

    printf("Sum of all array is %d",result);

}


int sumElements (int * arr , int size){

    int sum = 0 ;

    for(int j = 0 ; j <size ; j++){

        sum=sum + arr [j];


    }
    return sum ;

}


