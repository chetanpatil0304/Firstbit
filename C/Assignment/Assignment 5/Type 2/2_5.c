#include <stdio.h>
void main  (){

char choice ;

printf("Are you a student Enter y otherwise n  \n");
scanf("%c",&choice);

if(choice=='y' || choice == 'Y') {
    printf("After Discount your Final Your Amount %d\n",student ());
}else if(choice=='n' || choice == 'N'){
    printf("After Discount your Final Your Amount %d\n",person ());

}


}

int student () {
    int purchase ;
    int total_price ;
    printf("Enter your purchase amount  \n");
    scanf("%d",&purchase);

    if (purchase>=500){

        float discount=purchase*0.20;
        total_price = purchase-discount ;
       
    }else{

        float discount=purchase*0.10;
        total_price = purchase-discount ;
     
    }
    return total_price ;
}

int person (){
     int purchase  , total_price;
    printf("Enter your purchase amount  \n");
    scanf("%d",&purchase);

    if (purchase>=500){

        float discount=purchase*0.20;
        total_price = purchase-discount;

    }else{

        float discount=purchase*0.10;
        total_price = purchase-discount ;

    }
    return total_price ;
    
}