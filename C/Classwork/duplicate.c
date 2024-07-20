#include <stdio.h>
void main (){

    int arr [10] = { 1,0,0,0,1,2,3,4,4,5,6};

    int n ;
    int visi [n] ;

    for(int i =0 ; i<n ; i++){
        int count=1;
        visi [i]==0;

        for (int j =i+1 ; j <n ; j++){
            if(arr[i]==arr[j]){
                count++;
                visi[j]=1;
                
            }
            
        }
        printf("The count of  %d is %d\n",arr[i],count);
    }
}