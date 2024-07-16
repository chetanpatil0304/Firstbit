#include <stdio.h>

void operations  (int * , int *, char *);

void main (){

    int num1 = 10 , num2= 20 ;
    char op ='+' ;
    operations(&num1,&num2,&op);

}

void operations (int *num1 , int *num2 , char *op){

    if (*op == '+'){
    
        int res = *num1 + *num2 ;
        printf("The Addition of %d and %d is %d",*num1,*num2,res);

    }else if(*op == '-'){

        int res = *num1 - *num2 ;
         printf("The Substraction of %d and %d is %d",*num1,*num2,res);

    }else if (op == '*'){

        int res = *num1 * (*num2) ;
        printf("The Multiplication of %d and %d is %d",num1,num2,res);

    }else if (op == '%'){

        int res = *num1 / *num2 ;
        printf("The Division of %d and %d is %d",*num1,*num2,res);
    }else{
        printf("Please select valid operation");
    }
}