#include <stdio.h>
#include <string.h>

typedef struct{
   int feet ;
   int inch ;

}Distance;

void display(Distance*,int);
void store(Distance*,int);

int main() {
    Distance distArray[2] ;

    store(distArray,2);
    display(&distArray,2);

    return 0;
}

void store(Distance * distArray , int size) {

    for(int i=0 ;i<size ;i++){
        
        printf("Enter Feet : \n");
        scanf("%d",&distArray[i].feet);

        printf("Enter Inch : \n");
        scanf("%d",&distArray[i].inch);

    }


}

void display(Distance* distArray , int size) {

    for(int i=0 ;i<size ;i++){

        printf("--------------------\n");
        printf(" %d:",distArray[i].inch);
        printf("%d",distArray[i].feet);
        printf("--------------------\n");

    }


}
