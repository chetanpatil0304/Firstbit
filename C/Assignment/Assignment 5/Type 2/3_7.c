#include <stdio.h>
void main (){

    printf("The factorial of number is %d",factorialnum());
}
int factorialnum (){

    int num = 5 ;
    int sum = 1 ;

    while(num>0){

       sum = sum * num;
       num-- ;
        
    }
    return sum ;
}