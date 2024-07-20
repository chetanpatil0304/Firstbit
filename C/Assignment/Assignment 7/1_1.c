#include <stdio.h>
void main (){

    int arr [10];

    printf("Enter Array Elements"); 

    for (int i = 0 ; i < 10 ; i ++)
    {
        scanf("%d",&arr[i]);
    }

    int min = arr[0] , max = arr[0] ;

    for (int j = 0 ; j <10 ; j++){

        if(arr [j]<min){
            min=arr[j];
           
            
        }else if (arr[j]>max){
            max=arr[j];
            
        }
        
        
    }
     printf("The minimun number is %d\n",min);
     printf("The maximum number is %d\n",max);


}