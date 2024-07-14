#include <stdio.h>
int main (){

    int num = 5 ;
    int sum = 1 ;

    while(num>0){

       sum = sum * num;
       num-- ;
        
    }
    printf("%d",sum);
}