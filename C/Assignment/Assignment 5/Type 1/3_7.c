#include <stdio.h>
void factorial ();
void main (){
    factorial ();
}
void factorial (){
        int num = 5 ;
    int sum = 1 ;

    while(num>0){

       sum = sum * num;
       num-- ;
        
    }
    printf("%d",sum);
}