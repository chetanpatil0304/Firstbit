#include <stdio.h>

void main (){

    int cost ;

    printf("Enter the cost of the book");
    scanf("%d",&cost);

    book (cost);

}
void book (int cost){
    double discount ;

    if(cost<=500){
        discount=cost *0.05 ;

    }else if (cost >=1000){
        discount=cost *0.010 ;
        
    }else if (cost >=1500){
        discount=cost *0.015 ;
       
    }else if (cost >=2000){
        discount=cost *0.020;
        
    }else {
        printf("Enter valid price");
    }

    printf("Selling price of book is %lf",cost-discount);


}