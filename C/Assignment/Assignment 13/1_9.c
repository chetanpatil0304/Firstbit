#include <stdio.h>
#include <string.h>

typedef struct{
   int real ;
   int imaginary ;


}Complex;

void display(Complex a2);
Complex store(Complex a2);

int main() {
    Complex a1 , a2;

    a1 = store(a1);
    display(a1);
    a2 = store(a2);
    display(a2);

    return 0;
}

Complex store(Complex a2) {

   printf("Enter Feet : \n");
   scanf("%d",&a2.real);

    printf("Enter Inch : \n");
   scanf("%d",&a2.imaginary);

    return a2;
}

void display(Complex a2) {

    printf(" %d:",a2.real);
    printf("%d",a2.imaginary);

}
