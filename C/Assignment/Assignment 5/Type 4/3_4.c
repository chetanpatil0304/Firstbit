#include <stdio.h>
void main (){

    int num =125 ;
    int d =2;

    int result = prime (num , d);

    if (result==1)
    {
        printf("The number is a prime number");
    }else {
        printf("The number is a prime number");

    }

    

}
int prime (int num , int d){
    int flag = 0 ;

    while (d<num){ 

        if (num%d==0){
            flag = 1;
            break;

        }
        d++;

    }

    if (flag==1) {
        return 1 ;

    }else {
       return 0 ;
    }

       
}