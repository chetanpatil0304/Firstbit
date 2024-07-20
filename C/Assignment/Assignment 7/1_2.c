#include <stdio.h>
void main (){

    int arr [5];
    int flag = 0 ;

    printf("Enter Array Elements"); 

    for (int i = 0 ; i < 5 ; i ++)
    {
        scanf("%d",&arr[i]);

    }

    int search ;
    printf("Enter the number to search");
    scanf("%d",&search);


    for(int j = 0 ; j <5 ; j++){
        if(arr[j]==search){
            flag =1;
            break;
        
    }
    }

    if(flag==1){
        printf("Number is found");
    }else {
        printf("Number is not found");
    }

}
