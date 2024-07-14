#include <stdio.h>

void operations  ();

void main (){
    operations();

}

void operations (){
    int num1 = 10 , num2= 20 ;
    char op ='+' ;

    if (op == '+'){
    
        int res = num1 + num2 ;
        printf("The Addition of %d and %d is %d",num1,num2,res);

    }else if(op == '-'){

        int res = num1 - num2 ;
         printf("The Substraction of %d and %d is %d",num1,num2,res);

    }else if (op == '*'){

        int res = num1 * num2 ;
        printf("The Multiplication of %d and %d is %d",num1,num2,res);

    }else if (op == '%'){

        int res = num1 / num2 ;
        printf("The Division of %d and %d is %d",num1,num2,res);
    }else{
        printf("Please select valid operation");
    }
}