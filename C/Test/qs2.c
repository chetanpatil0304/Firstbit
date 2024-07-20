#include <stdio.h>
void main (){
    int balance = 5000;
    int choice ;

    printf("Welcome to Yes Bank\n");

    printf("press 1 for Withdraw & press 2 for deposit\n");
    scanf("%d",&choice);

    if (choice==1){
        withdraw (balance);
    }else {
        deposit (balance);
    }

  
}

void withdraw (int balance){

    int withdraw_amount = 0 ;

    printf("Enter Amount to withdraw\n");
    scanf("%d",&withdraw_amount) ;

    if(balance <3000){
        printf("can not withdraw the amount balance is not sufficient\n");

    }else if (balance>=3000){

        balance = balance - withdraw_amount ;

        printf("Amount is withdrawal \n");

        printf("Your Account balance is %d",balance);

    }
}

void deposit (int balance){

    int deposit_amount = 0 ;

    printf("Enter your deposit amount");
    scanf("%d",&deposit_amount);

    balance=balance+deposit_amount ;

    printf("YOUR ACCOUNT BALANCE IS %d",balance);
}