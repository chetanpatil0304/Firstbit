#include <stdio.h>
void even_odd ();
void main (){
    int number = 10 ;
    even_odd(number);
}

void even_odd (int number){

    if(number % 2 == 0){
        printf("The number %d is a Even number",number);
    } else{
        printf("The number %d is a odd number",number);
    }

}