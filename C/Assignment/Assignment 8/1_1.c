#include <stdio.h>
void main (){

    int arr [10];

    printf("Enter Array Elements"); 

    for (int i = 0 ; i < 10 ; i ++)
    {
        scanf("%d",&arr[i]);
    }

    int Minnum = findmin(arr,10);
    int Maxnum = findmax(arr,10);

    printf("The minimun number is %d\n",Minnum);
    printf("The maximum number is %d\n",Maxnum);


    
}

int findmin(int * arr , int size ){

    int min = arr[0] ;

    for (int j = 0 ; j < size ; j++){

        if(arr [j]<min){

            min=arr[j];       
            
        }
        
    }
    return min ;


}

int findmax(int * arr , int size){

    int max = arr[0] ;

    for (int j = 0 ; j < size ; j++){

        if (arr[j]>max){

            max=arr[j];
            
        }
        
    }
    return max ;


}