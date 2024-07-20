#include <stdio.h>
void main (){

    int arr [5];
    int flag = 0 ;

    printf("Enter Array Elements"); 

    for (int i = 0 ; i < 5 ; i ++)
    {
        scanf("%d",&arr[i]);

    }


    for(int j = 0 ; j <5 ; j++){

         int d =2;

        if (arr[j]%d==0){
           printf("The prime numbers are %d \n",arr[j]);

        }


    }

}
