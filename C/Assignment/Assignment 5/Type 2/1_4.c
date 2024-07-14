#include <stdio.h>
int even_odd ();
void main (){
    int result =even_odd();

    if (result == 1){
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }
}

int even_odd (){
    int number = 10 ;

    if(number % 2 == 0){
        return 1;
    } else{
       return 0;
    }

}