#include <stdio.h>
void print_1to10();

void main (){
    print_1to10 ();
}

void print_1to10 () {

    int num = 1 ;

    while (num<=10){
        printf("%d\n",num);
        num++;
    }
    
}