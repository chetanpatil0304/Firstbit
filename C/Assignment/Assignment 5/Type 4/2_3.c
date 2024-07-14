#include <stdio.h>
int operations (int , int , char);
void main (){ 

    int num1 = 10 , num2= 20 ;
    char op ='+' ;

    int ans = operations (num1 , num2 , op);
    
    if (ans == 1) {
        printf("Please select a valid operation\n");
    } else {
        printf("The result is: %d\n", ans);
    }

}
int operations (int num1, int num2 , char op){


    if (op == '+'){
    
        return num1 + num2 ;
        

    }else if(op == '-'){

        return num1 - num2 ;

    }else if (op == '*'){

        return num1 * num2 ;

    }else if (op == '%'){

       return num1 / num2 ;
       
    }else{
        printf("Please select valid operation");
        return 1 ;
    }
}