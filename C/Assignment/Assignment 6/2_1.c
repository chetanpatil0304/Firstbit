#include <stdio.h>
void discountprice (int *,int *);
void main (){
    int price = 10000 ;
    int discount ;

    discountprice (&price , &discount);
}
void discountprice (int *price , int *discount)
{
    
    if (*price>=1000 && *price <=2000 ){
        
        *discount = *price * 0.05 ;
        printf("Your Purchase Amount %d\n",*price);
        printf("For your Purchase you get 5%% Discount so, Final Amount %d",*price-*discount);

    }else if (*price >=2000 && *price <= 3000){

        *discount = *price * 0.10 ;
         printf("Your Purchase Amount %d\n",price);
        printf("For your Purchase you get 10%% Discount so, Final Amount %d",price-discount);

    }else if (*price >= 3000l){

        *discount = *price * 0.20 ;
        printf("Your Purchase Amount %d\n",*price);
        printf("For your Purchase you get 20%% Discount so, Final Amount %d",*price-*discount);

    }else {
        printf("Your Purchase Amount %d\n",*price);
        printf("You are not eligible for discount");
    }

}