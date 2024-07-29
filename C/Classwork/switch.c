#include <stdio.h>
#include <string.h>
void main (){

    int day =2 ;

    printf("The Day in a month :",day);


    switch(day){
        case 1 :
        printf("Monday");
        break;

        case 2 :
        printf("Tuesday");
        break;

        case 3 :
        printf("Wednesday");
        break;

        case 4 :
        printf("Thursday");
        break;

        case 5 :
        printf("Friday");
        break;

        case 6 :
        printf("saturday");
        break;

        case 7 :
        printf("Sunday");
        break;

        default :
        printf("Enter valid");
    }
}