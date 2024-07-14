#include <stdio.h>

void main (){

    int num = 153;
    int temp = num ;

    int ans = armstrongnum (num , temp);

    if (ans==1){
        printf ("Its is a armstrong number");
     }else{
        printf("It is not a armstrong number");
    }
}
int armstrongnum  (int num, int temp){

    int sum = 0 ;
    int r ;

    while (num){

        r = num %10 ;   
        sum = sum + (r*r*r) ;
        num = num / 10 ;

    }

    if (sum == temp){
        return 1;
     }else{
        return 0;

     }
}