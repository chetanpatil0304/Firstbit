#include <stdio.h>
#include <string.h>

typedef struct{
    int id ;
    char name [50];
    int quality ;
    float price ;

}Product;

void display(Product );
Product store(Product );

int main() {
    Product a1 , a2;

    a1 = store(a1);
    display(a1);
    a2 = store(a2);
    display(a2);

    return 0;
}

Product store(Product a2) {

  printf("Enter ID : \n");
   scanf("%d",&a2.id);

   printf("enter name : \n");
   scanf("%s",a2.name);

    printf("Enter Quality : \n");
   scanf("%d",&a2.quality);

    printf("Enter Price : \n");
   scanf("%f",&a2.price);

    return a2;
}

void display(Product a2) {

    printf("ID : %d\n",a2.id);
    printf("Name : %s\n",a2.name);
    printf("Quality :%d\n",a2.quality);
    printf("Price :%f\n",a2.price);

}
