#include <stdio.h>
int operations () ;
void main (){

    int ans =operations ();
    
    if (ans == -1) {
        printf("Please select a valid operation\n");
    } else {
        printf("The result is: %d\n", ans);
    }

}
int operations (){
    int num1 = 10 , num2= 20 ;
    char op ='+' ;

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
        return -1 ;
    }
}