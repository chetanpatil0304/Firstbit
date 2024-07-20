#include <stdio.h>
void greatest_three ();
void main ()
{
    int a =1000 ,b =230 ,c =30 ;
    greatest_three (&a,&b,&c);
}
void greatest_three (int *a ,int *b , int *c){

    if (*a>*b && *a>*c){

        printf("A is greater %d",*a);

    }else if (*b>*c){
        printf("B is a grater %d",*b);
    }else{
        printf("C is a greater %d",*c);
    }
}