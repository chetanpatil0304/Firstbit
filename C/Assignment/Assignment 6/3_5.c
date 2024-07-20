#include <stdio.h>
void armsrong ();
void main (){

     int num = 153;
    int temp = num ;
    int sum = 0 ;
    int r ;
    armstrong (&num,&temp,&sum,&r);
}
void armstrong (int* num , int* temp , int *sum , int* r){

    while (*num!=0){

        *r = *num %10 ;   
        *sum = *sum + (*r*(*r)*(*r)) ;
        *num = *num / 10 ;

    }

    if (*sum == *temp){
        printf ("Its is a armstrong number");
     }else{
        printf("It is not a armstrong number");

     }
}