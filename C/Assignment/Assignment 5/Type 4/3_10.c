#include <stdio.h>
void main (){

    int num = 2345 ;
    printf("The addition of first and last number is %d " ,addfirst_last (num));

}
int addfirst_last (int num){

    int r =0;
    int last = num %10 ; //5

    while(num>0){

        r = num % 10 ;   
        num = num / 10 ;
        
    }

    return last + r ;

}

    



