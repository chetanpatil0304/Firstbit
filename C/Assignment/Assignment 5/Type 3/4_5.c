#include <stdio.h>
void main (){

    int n1 = 0 , n2 = 1 ;
    int n3 ;
    fibonacci (n1,n2,n3);
}
void fibonacci (int n1 ,int n2 ,int n3){

    printf("%d\n",n1);

    for (int i=0 ; i <= n3 ; i++){

    n3 = n1 + n2 ;
    n1 = n2 ;
    n2 = n3 ;
    printf("%d\n",n3);

    }
    
}