#include <stdio.h>
void main (){
    int no1=10 , no2=20, no3 =30 ;


    if(no1>no2 && no1>no3)
    {
        printf("First number is greater");
    }
    else if (no2>no3){
        printf("Second number is greater");
    }else {
        printf("Third number is greater");
    }
}