#include <stdio.h>
void main (){

    int arr1 [5];
    
    printf("Enter First Array Elements"); 
    for (int i = 0 ; i < 5 ; i ++)
    {
        scanf("%d",&arr1[i]);

    }

    int arr2 [10];
    
    printf("Enter Second Array Elements"); 
    for (int i = 0 ; i < 7 ; i ++)
    {
        scanf("%d",&arr2[i]);

    }

    int sum []= { };

    printf("Sum of array is \n");

    for (int k = 0 ; k <7 ; k++){
        sum [k] =arr1[k]+arr2[k];
        printf("%d\n",sum[k]);
    }
    

 





}
