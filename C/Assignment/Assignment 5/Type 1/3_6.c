#include <stdio.h>
void perfect ();
void main (){

    perfect ();

}
void perfect (){
    int num = 7;
    int sum = 0;

    int d = 1;

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