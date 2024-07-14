#include <stdio.h>
int discount ();
void main (){

     printf("For your Purchase you get 20%% Discount so, Final Amount %d",discount ());
}
int discount ()
{
     int price = 10000 ;
    int discount ,final_price ;

    if (price>=1000 && price <=2000 ){
        
        discount = price * 0.05 ;
        

    }else if (price >=2000 && price <= 3000){

        discount = price * 0.10 ;
        
    }else if (price >= 3000l){

        discount = price * 0.20 ;

    }else {
        printf("Your Purchase Amount %d\n",price);
        printf("You are not eligible for discount");
    }

    final_price = price - discount ;
    return final_price ;

}