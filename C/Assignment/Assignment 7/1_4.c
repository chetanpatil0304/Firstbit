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

        if(arr[j] % 2 == 0){

            printf("even numbrs %d\n",arr[j]);
        }else {
            printf("odd numbers%d\n",arr[j]);
        }


           
    }
    

}
