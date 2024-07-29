#include <stdio.h>
#include <string.h>

struct Distance {
   int feet ;
   int inch ;

};

struct Distance a1 , a2 ;
int main (){

    a1.feet=1;
    a1.inch=44;

    printf(" %d:",a1.feet);
    printf("%d",a1.inch);


    // user

   printf("Enter Feet : \n");
   scanf("%d",&a2.feet);

    printf("Enter Inch : \n");
   scanf("%d",&a2.inch);


    printf(" %d:",a2.feet);
    printf("%d",a2.inch);

    return 0 ;


}