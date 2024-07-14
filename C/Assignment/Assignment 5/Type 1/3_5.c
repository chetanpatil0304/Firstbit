#include <stdio.h>
void armsrong ();
void main (){
    armstrong ();
}
void armstrong (){
    int num = 153;
    int temp = num ;
    int sum = 0 ;
    int r ;

    while (num){

        r = num %10 ;   
        sum = sum + (r*r*r) ;
        num = num / 10 ;

    }

    if (sum == temp){
        printf ("Its is a armstrong number");
     }else{
        printf("It is not a armstrong number");

     }
}