#include <stdio.h>
void main (){

    int num = 7;
    int sum = 0;
    int d = 1;

    int result = perfectnum (num,sum,d);

    if (result == 1){
      
         printf("The number is a perfect number");

    }else {
        printf("The number is a not perfect number ");
    }
}
int perfectnum (int num , int sum , int d){


     while (d<num){ 

        if (num%d==0){
            sum =sum + d;

        }
        d++;

    }

    if (num==sum){
      
         return 1 ;

    }else {
        return 0 ;
    }

       
}
