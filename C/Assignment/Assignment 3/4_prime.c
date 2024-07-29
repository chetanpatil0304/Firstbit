#include <stdio.h>
int main (){
    int num =5;

    int d =2;
    int flag = 0 ;

    while (d<num){ 

        if (num%d==0){
            flag = 1;
            break;

        }
        d++;

    }

    if (flag==1) {
        printf("The number %d is not  a prime number",num);

    }else {
        printf("The number %d is a prime number ",num);
    }

       
}