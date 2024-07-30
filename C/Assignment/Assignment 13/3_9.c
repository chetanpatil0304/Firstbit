#include <stdio.h>
#include <string.h>

typedef struct{
   int real ;
   int imaginary ;


}Complex;

void display(Complex*,int);
void store(Complex*,int );

int main() {
    Complex comArray[2];

    store(comArray,2);
    display(&comArray,2);

    return 0;
}

void store(Complex* comArray ,int size) {

    for(int i=0 ;i<size ;i++){
        printf("Enter Feet : \n");
        scanf("%d",&comArray[i].real);

        printf("Enter Inch : \n");
       scanf("%d",&comArray[i].imaginary);

    }

}

void display(Complex* comArray , int size) {

    for(int i=0 ;i<size ;i++){

        printf("-----------------------\n");
        printf(" %d:",comArray[i].real);
        printf("%d",comArray[i].imaginary);
        printf("-----------------------\n");

    }


}
