#include <stdio.h>
int main (){

    int year =2017 ;
    int leap = year % 4 ;

    if (leap==0){
        printf("NO . of days in February month is 29");
    }else{
        printf("No of days in february month is 28");
    }
}