#include <stdio.h>
void main ()
{
    int num = 1 ;
    int table =2;
    tableprint (&num,&table);
}

void tableprint (int *num ,int *table){

    while (*num<=10){
       
        printf("%d\n",*table*(*num));
        (*num)++;

    }
}