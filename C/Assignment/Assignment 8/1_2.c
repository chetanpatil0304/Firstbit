#include <stdio.h>
void main (){

    int arr [5];

    printf("Enter Array Elements"); 

    for (int i = 0 ; i < 5 ; i ++)
    {
        scanf("%d",&arr[i]);

    }

    int search ;
    printf("Enter the number to search");
    scanf("%d",&search);

    int result = tofind(arr ,search ,5);

    if(result==1){
        printf("Number is found");
    }else {
        printf("Number is not found");
    }
  

}
int tofind ( int * arr , int search , int size){


      for(int j = 0 ; j < size ; j++){
        if(arr[j]==search){
            return 1 ;
        
    }
    return 0  ;
    }

 }