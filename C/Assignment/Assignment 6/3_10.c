#include <stdio.h>
void first_last ();
void main (){
     int num = 2345 ;
    int r =0;
    first_last (&num,&r);
}

void first_last (int *num , int *r){
    
    int last = *num %10 ; //5

    while(*num>0){

        *r = *num % 10 ;   
        *num = *num / 10 ;
        
    }

    int sum = last + *r ;
    printf("The addition of first and last number :%d",sum);

}