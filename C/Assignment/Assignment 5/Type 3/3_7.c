#include <stdio.h>
void main (){

    int num = 5 ;
    int sum = 1 ;
    factorial (num,sum);
}
void factorial (int num , int sum){

    while(num>0){

       sum = sum * num;
       num-- ;
        
    }
    printf("%d",sum);
}