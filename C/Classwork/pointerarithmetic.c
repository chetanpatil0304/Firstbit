#include <stdio.h>

void main (){

    int a = 10 ;
    int * ptr = &a ;

   // printf("%u\n",ptr);
  //  printf("%u\n",*ptr);
  //  printf("%u\n",&a);


    printf("%u\n",ptr);
    printf("%u\n",(ptr+1));
    printf("%u\n",(ptr+2));
    printf("%u\n",(ptr+3));



   // printf("%d ",sizeof(int));
   // printf("%d ",sizeof(int *));

   printf("\n");

   double b =1000000000000 ;
   double * p = &b ;

    printf("%u\n",p);
    printf("%u\n",(p+1));
    printf("%u\n",(p+2));
    printf("%u\n",(p+3));

   






}