#include <stdio.h>
int main (){
    int i = 1;
    int sum = 0 ;

    while(i<=10){
        sum = sum + i; 
        i++;         
    }
    printf("Sum = %d",sum);

    return 0 ;
    
}