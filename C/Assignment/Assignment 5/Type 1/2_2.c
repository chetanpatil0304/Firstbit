#include <stdio.h>
void greatest_three ();
void main ()
{
    greatest_three ();
}
void greatest_three (){
    int a =1000 ,b =230 ,c =30 ;

    if (a>b && a>c){

        printf("A is greater %d",a);

    }else if (b>c){
        printf("B is a grater %d",b);
    }else{
        printf("C is a greater %d",c);
    }
}