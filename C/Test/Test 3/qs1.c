#include <stdio.h>

void main (){

    int num = 32145 ;
    int rem ;
    reverse (num , rem);

}

void reverse (int num,int rem ){
    int even=0 , odd=0 ;

    while (num!=0){

        rem = num % 10 ;
        if(rem%2==0){
            even= even + rem;
        }else{
            odd = odd + rem;
        }    
        num = num / 10 ; 

    }
        printf("%d\n",even);
        printf("%d",odd);
    

    

}

