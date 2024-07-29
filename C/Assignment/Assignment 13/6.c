#include <stdio.h>
#include <string.h>

struct Date {
   int date ;
   int month ;
   int year ;

};

struct Date a1 , a2 ;
int main (){

    a1.date=3;
    a1.month=4;
    a1.year=2003;

    printf("Date : %d\n",a1.date);
    printf("Month : %d\n",a1.month);
    printf("Year : %d\n",a1.year);

    // user

   printf("Enter Date : \n");
   scanf("%d",&a2.date);

    printf("Enter Month : \n");
   scanf("%d",&a2.month);

    printf("Enter Year : \n");
   scanf("%d",&a2.year);


    printf("Date : %d\n",a2.date);
    printf("Month : %d\n",a2.month);
    printf("Year : %d\n",a2.year);

    return 0 ;


}