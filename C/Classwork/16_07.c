#include <stdio.h>
void main (){

    int num1 = 10 ;
    int num2= 20 ;

    int n1 = &num1 ;
    int n2 =&num2 ;

    printf("%d\n",num1);
    printf("%d\n",num2) ;

    printf("%d\n",&n1);
    printf("%d\n",&n2);

    printf("%d\n",*n1);




    

}