#include <stdio.h>
void even_odd ();
void main (){
    even_odd();
}

void even_odd (){
        int number = 10 ;

    if(number % 2 == 0){
        printf("The number %d is a Even number",number);
    } else{
        printf("The number %d is a odd number",number);
    }

}