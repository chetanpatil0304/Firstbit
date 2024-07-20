#include <stdio.h>
double book (double);
void main {

    double cost ;

    printf("Enter the cost of the book");
    scanf("%d",&cost);

    book (cost);

}

double book (double cost){
    double discount ;

    if(cost<=500){
        discount = cost *0.5 ;
    }

}