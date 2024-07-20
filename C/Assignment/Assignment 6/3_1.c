#include <stdio.h>

void main (){

     int num = 1 ;
    print_1to10 (&num);
}

void print_1to10 (int *num) {


    while (*num<=10){
        printf("%d\n",*num);
        (*num) ++;
    }
    
}