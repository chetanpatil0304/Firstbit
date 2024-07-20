#include <stdio.h>
void main (){

    int num =125 ;
    int d =2;
    int flag = 0 ;

    prime (&num,&d,&flag);
}

void prime (int *num , int *d , int *flag){

    while (*d<*num){ 

        if (*num%*d==0){
            flag = 1;
            break;

        }
        (*d)++;

    }

    if (flag==1) {
        printf("The number %d is a prime number",*num);

    }else {
        printf("The number %d is a not prime number ",*num);
    }

       

}