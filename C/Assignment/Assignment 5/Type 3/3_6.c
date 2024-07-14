#include <stdio.h>
void perfect ();
void main (){

     int num = 7;
    int sum = 0;

    int d = 1;

    perfect (num,sum,d);

}
void perfect (int num , int sum, int d){

     while (d<num){ 

        if (num%d==0){
            sum =sum + d;

        }
        d++;

    }

    if (num==sum){
      
         printf("The number %d is a perfect number",num);

    }else {
        printf("The number %d is a not perfect number ",num);
    }

}