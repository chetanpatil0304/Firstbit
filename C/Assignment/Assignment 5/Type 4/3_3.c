#include <stdio.h>
void main (){

    int num = 12345;
    int sum = 0 ;
    int r = 0  ;

    printf("Sum = %d",sum_ofdigit(num,sum,r));

}

int sum_ofdigit (int num , int sum , int r){


    while(num>0){

        r = num % 10 ;         
        num = num / 10 ;          
        sum = sum + r;          

    }
    return sum ;
}

