#include <stdio.h>
void main (){

     int arr1 [5];
    
    printf("Enter First Array Elements\n"); 
    for (int i = 0 ; i < 5 ; i ++)
    {
        scanf("%d",&arr1[i]);

    }

    reversearray (arr1);

}

void reversearray (int * arr1){

    printf("Reverse of array is\n"); 
    for (int i = 4 ; i >=0 ; i--)
    {
        printf("%d\n",arr1[i]);


    }

}
