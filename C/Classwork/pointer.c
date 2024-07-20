#include <stdio.h>
void main (){

    int a = 10 ;

    int * ptr =& a ;

    printf("%u\n",ptr);
    printf("%u\n",&a);
    printf("%u\n",*ptr);
    
}