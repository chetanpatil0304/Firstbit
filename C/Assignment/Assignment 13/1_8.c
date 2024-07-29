#include <stdio.h>
#include <string.h>

typedef struct{
   int feet ;
   int inch ;

}Distance;

void display(Distance a2);
Distance store(Distance a2);

int main() {
    Distance a1 , a2;

    a1 = store(a1);
    display(a1);
    a2 = store(a2);
    display(a2);

    return 0;
}

Distance store(Distance a2) {

   printf("Enter Feet : \n");
   scanf("%d",&a2.feet);

    printf("Enter Inch : \n");
   scanf("%d",&a2.inch);

    return a2;
}

void display(Distance a2) {

    printf(" %d:",a2.feet);
    printf("%d",a2.inch);

}
