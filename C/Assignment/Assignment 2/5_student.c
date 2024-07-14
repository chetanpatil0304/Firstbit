#include <stdio.h>
int main (){

// Are you a student ?
//1. Yes=y 2. No=n

 char choice ;

printf("Are you a student Enter y otherwise n  \n");
scanf("%c",&choice);

if(choice=='y' || choice == 'Y') {

    int purchase ;
    printf("Enter your purchase amount  \n");
    scanf("%d",&purchase);

    if (purchase>=500){

        float discount=purchase*0.20;
        printf("Your Purchase Amount %d\n",purchase);
        printf("For your Purchase you get 20%% Discount so, Final Amount %f",purchase-discount);

    }else{

        float discount=purchase*0.10;
        printf("Your Purchase Amount %d\n",purchase);
        printf("For your Purchase you get 10%% Discount so, Final Amount %f",purchase-discount);

    }


}else if(choice=='n' || choice == 'N'){
    int purchase ;
    printf("Enter your purchase amount  \n");
    scanf("%d",&purchase);

    if (purchase>=500){

        float discount=purchase*0.15;
        printf("Your Purchase Amount %d\n",purchase);
        printf("For your Purchase you get 15%% Discount so, Final Amount %f",purchase-discount);

    }else{

    
        printf("Your Purchase Amount %d so there is no discount\n",purchase);
        
    }
}
}