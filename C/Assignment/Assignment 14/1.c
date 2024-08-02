#include <stdio.h>
#include <string.h>
typedef struct{

    char bname[100] ;
    int id ;
    char author[100] ;
    int price ;

}book;

void store(book* ,int);
void display(book* , int );
void main(){

    book bookArray [2];

    store(bookArray,2);
    display(bookArray,2);



}

void store(book* bookArray , int size) {


    for(int i=0 ; i<size ;i++){

        printf("Enter Book name : \n");
        scanf("%s", &bookArray[i].bname);

        printf("Enter ID : \n");
        scanf("%d", &bookArray[i].id);

        printf("Enter Author: \n");
        scanf("%s", &bookArray[i].author);

        printf("Enter Price : \n");
        scanf("%d", &bookArray[i].price);

    }
}


void display(book* bookArray , int size) {

    for(int i=0 ; i<size ;i++){

        printf("-----------------------\n");
        printf("Book name: %s \n", bookArray[i].bname);
        printf("ID %d \n", bookArray[i].id);
        printf("Author: %s\n", bookArray[i].author);
        printf("Price: %d\n", bookArray[i].price);
        printf("-----------------------\n");

    }

   
}
