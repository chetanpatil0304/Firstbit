#include <stdio.h>
#include <string.h>

typedef struct{
   int hour ;
   int min ;
   int sec ;

}Time;

void display(Time*,int);
void store(Time*,int);

int main() {
    Time timeArray[2] ;

    store(timeArray,2);
    display(&timeArray,2);


    return 0;
}

void store(Time * timeArray , int size) {

    for(int i=0 ; i<size ; i++){

        printf("Enter Hour : \n");
        scanf("%d",&timeArray[i].hour);

        printf("Enter Minute : \n");
        scanf("%d",&timeArray[i].min);

        printf("Enter Second : \n");
        scanf("%d",&timeArray[i].sec);


    }
}

void display(Time* timeArray , int size) {

    for(int i =0 ;i <size ; i++){

        printf(" %d:",timeArray[i].hour);
        printf("%d",timeArray[i].min);
        printf(" :%d\n",timeArray[i].sec);

    }


}
