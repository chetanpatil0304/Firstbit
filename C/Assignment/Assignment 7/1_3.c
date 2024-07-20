#include <stdio.h>
void main (){

    int arr [5];
    int flag = 0 ;

    printf("Enter Array Elements"); 

    for (int i = 0 ; i < 5 ; i ++)
    {
        scanf("%d",&arr[i]);

    }

    int sum = 0 ;

    for(int j = 0 ; j <5 ; j++){

        sum=sum + arr [j];


    }
    printf("Sum of all array is %d",sum);

}
