#include <stdio.h>
#include <string.h>

struct Complex {
   int real ;
   int imaginary ;

};

struct Complex a1 , a2 ;
int main (){

    a1.real=1;
    a1.imaginary=44;

    printf(" %d:",a1.real);
    printf("%d",a1.imaginary);


    // user

   printf("Enter Feet : \n");
   scanf("%d",&a2.real);

    printf("Enter Inch : \n");
   scanf("%d",&a2.imaginary);


    printf(" %d:",a2.real);
    printf("%d",a2.imaginary);

    return 0 ;


}