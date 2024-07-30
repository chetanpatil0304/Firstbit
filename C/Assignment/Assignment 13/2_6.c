#include <stdio.h>
#include <string.h>

typedef struct{
   int date1 ;
   int month ;
   int year ;
}Date;

void display(Date*);
Date store(Date);

int main() {
    Date a1;

    a1 = store(a1);
    display(&a1);

    return 0;
}

Date store(Date a2) {

   printf("Enter Date : \n");
   scanf("%d",&a2.date1);

    printf("Enter Month : \n");
    scanf("%d",&a2.month);

    printf("Enter Year : \n");
   scanf("%d",&a2.year);

    return a2;
}

void display(Date* a2) {

    printf("Date : %d\n",a2->date1);
    printf("Month : %d\n",a2->month);
    printf("Year : %d\n",a2->year);

}
