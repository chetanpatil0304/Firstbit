#include <stdio.h>
void table ();
void main ()
{
    table ();
}

void table (){
    int num = 1 ;
    int table =2;

    while (num<=10){
       
        printf("%d\n",table*num);
        num++;

    }
}