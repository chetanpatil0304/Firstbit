#include <stdio.h>
#include <string.h>

typedef struct{
   int date1 ;
   int month ;
   int year ;
}Date;

void display(Date*,int);
void store(Date*,int);

int main() {
    Date dateArray [2];

    store(dateArray,2);
    display(&dateArray,2);

    return 0;
}

void store(Date * dateArray , int size) {

    for(int i=0 ; i<size ; i++){
        printf("Enter Date : \n");
        scanf("%d",&dateArray[i].date1);

        printf("Enter Month : \n");
        scanf("%d",&dateArray[i].month);

        printf("Enter Year : \n");
        scanf("%d",&dateArray[i].year);

    }

}

void display(Date* dateArray , int size) {


    for(int i = 0 ; i<size ;i++){
        
        printf("----------------------\n");
        printf("Date : %d\n",dateArray[i].date1);
        printf("Month : %d\n",dateArray[i].month);
        printf("Year : %d\n",dateArray[i].year);
        printf("----------------------\n");

    }


}
