#include <stdio.h>
void main (){
    int num = 10 ;
    

    for(int i = 1 ; i<=num ; i++){

        if(num%i==0){
            printf("%d\n",i);
        }
       
    }
}