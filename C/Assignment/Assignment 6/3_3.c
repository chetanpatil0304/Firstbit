#include <stdio.h>
void main () {

    int num = 12345;
    int sum = 0 ;

    int r = 0  ;
    sumof_digit (&num,&sum,&r);
}
void sumof_digit(int* num , int* sum ,int* r){

    while(*num>0){

        *r = *num % 10 ;          //printf("r=%d\n",r);
        *num =* num / 10 ;          //printf("num=%d\n",num);
        *sum = *sum + * r;          //printf("Sum = %d",sum);

    }
    printf("Sum = %d",*sum);
}