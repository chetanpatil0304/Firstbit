#include <stdio.h>
#include <string.h>

typedef struct{
   int feet ;
   int inch ;

}Distance;

void display(Distance*);
Distance store(Distance);

int main() {
    Distance a1 ;

    a1 = store(a1);
    display(&a1);

    return 0;
}

Distance store(Distance a2) {

   printf("Enter Feet : \n");
   scanf("%d",&a2.feet);

    printf("Enter Inch : \n");
   scanf("%d",&a2.inch);

    return a2;
}

void display(Distance* a2) {

    printf(" %d:",a2->feet);
    printf("%d",a2->inch);

}
