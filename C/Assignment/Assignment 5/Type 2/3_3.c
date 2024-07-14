#include <stdio.h>
void main (){


    printf("Sum = %d",sum_ofdigit());


}

int sum_ofdigit (){

    int num = 12345;
    int sum = 0 ;

    int r = 0  ;

    while(num>0){

        r = num % 10 ;          //printf("r=%d\n",r);
        num = num / 10 ;          //printf("num=%d\n",num);
        sum = sum + r;          //printf("Sum = %d",sum);

    }
    return sum ;
}

