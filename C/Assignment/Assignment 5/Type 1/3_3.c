#include <stdio.h>

void sumof_digit ();
void main () {
    sumof_digit ();
}
void sumof_digit(){
    int num = 12345;
    int sum = 0 ;

    int r = 0  ;

    while(num>0){

        r = num % 10 ;          //printf("r=%d\n",r);
        num = num / 10 ;          //printf("num=%d\n",num);
        sum = sum + r;          //printf("Sum = %d",sum);

    }
    printf("Sum = %d",sum);
}