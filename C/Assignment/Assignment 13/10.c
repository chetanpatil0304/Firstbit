#include <stdio.h>
#include <string.h>

struct Product {

    int id ;
    char name [50];
    int quality ;
    float price ;

};

struct Product a1 , a2 ;
int main (){

    a1.id=1;
    strcpy(a1.name ,"Chetan");
    a1.quality=2;
    a1.price=54767 ;

    printf("ID : %d\n",a1.id);
    printf("Name : %s\n",a1.name);
    printf("Quality :%d\n",a1.quality);
    printf("Price :%f\n",a1.price);


    // user

   printf("Enter ID : \n");
   scanf("%d",&a2.id);

   printf("enter name : \n");
   scanf("%s",a2.name);

    printf("Enter Quality : \n");
   scanf("%d",&a2.quality);

    printf("Enter Price : \n");
   scanf("%f",&a2.price);




    printf("ID : %d\n",a2.id);
    printf("Name : %s\n",a2.name);
    printf("Quality :%d\n",a2.quality);
    printf("Price :%f\n",a2.price);

    return 0 ;


}