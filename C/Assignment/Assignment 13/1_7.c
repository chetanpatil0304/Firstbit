#include <stdio.h>
#include <string.h>

typedef struct{
   int hour ;
   int min ;
   int sec ;

}Time;

void display(Time a2);
Time store(Time a2);

int main() {
    Time a1 , a2;

    a1 = store(a1);
    display(a1);
    a2 = store(a2);
    display(a2);

    return 0;
}

Time store(Time a2) {

   printf("Enter Hour : \n");
   scanf("%d",&a2.hour);

    printf("Enter Minute : \n");
   scanf("%d",&a2.min);

    printf("Enter Second : \n");
   scanf("%d",&a2.sec);

    return a2;
}

void display(Time a2) {

    printf(" %d:",a2.hour);
    printf("%d",a2.min);
    printf(" :%d\n",a2.sec);

}
