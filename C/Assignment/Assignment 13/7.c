#include <stdio.h>
#include <string.h>

struct Time {
   int hour ;
   int min ;
   int sec ;

};

struct Time a1 , a2 ;
int main (){

    a1.hour=1;
    a1.min=44;
    a1.sec=55;

    printf(" %d:",a1.hour);
    printf("%d",a1.min);
    printf(":%d\n",a1.sec);

    // user

   printf("Enter Hour : \n");
   scanf("%d",&a2.hour);

    printf("Enter Minute : \n");
   scanf("%d",&a2.min);

    printf("Enter Second : \n");
   scanf("%d",&a2.sec);


    printf(" %d:",a2.hour);
    printf("%d",a2.min);
    printf(" :%d\n",a2.sec);

    return 0 ;


}