#include <stdio.h>
void main (){

    
    int num = 5 ;
    int sum = 1 ;

    printf("The factorial of number is %d",factorialnum(num,sum));
}
int factorialnum (int num , int sum){

    while(num>0){

       sum = sum * num;
       num-- ;
        
    }
    return sum ;
}