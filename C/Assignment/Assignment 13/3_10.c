#include <stdio.h>
#include <string.h>

typedef struct{
    int id ;
    char name [50];
    int quality ;
    float price ;

}Product;

void display(Product* , int);
void store(Product* , int );

int main() {
    Product proArray[2];

    store(proArray,2);
    display(&proArray,2);

    return 0;
}

void store(Product * proArray , int size) {

    for(int i=0 ;i<size ;i++){

        printf("Enter ID : \n");
       scanf("%d",&proArray[i].id);

   printf("enter name : \n");
   scanf("%s",proArray[i].name);

    printf("Enter Quality : \n");
   scanf("%d",&proArray[i].quality);

    printf("Enter Price : \n");
   scanf("%f",&proArray[i].price);


    }

}

void display(Product* proArray , int size) {

    for(int i=0 ;i<size ;i++){

        printf("ID : %d\n",proArray[i].id);
        printf("Name : %s\n",proArray->name);
        printf("Quality :%d\n",proArray[i].quality);
        printf("Price :%f\n",proArray[i].price);

    }


}
