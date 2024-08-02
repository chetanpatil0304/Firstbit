#include <stdio.h>
#include <string.h>

typedef struct {
    char name [100];
    int no_of_matches ;
    int runs  ;
    int wicket ;

}player ;

void main (){

    player playerArray [2];

    display(playerArray,2);
    store(playerArray,2);

}

void display (player * playerArray , int size){

    for(int i=0 ;i<size ;i++){

        printf("Enter A Player Name : \n");
        scanf("%s",&playerArray[i].name);

        printf("Enter Number Of Matches Played : \n");
        scanf("%d",&playerArray[i].no_of_matches);

        printf("Enter Run Scored : \n");
        scanf("%d",&playerArray[i].runs);
        
        printf("Enter Wickets taken :\n");
        scanf("%d",&playerArray[i].wicket);
    }
}

void store (player * playerArray , int size){

    for(int i=0 ;i<size ;i++){

        printf("--------------------------------\n");

        printf("Player Name :%s \n",playerArray[i].name);
        printf("Number Of Matches Played : %d \n",playerArray[i].no_of_matches);
        printf("Run Scored : %d\n",playerArray[i].runs);
        printf("Wickets taken : %d\n",playerArray[i].wicket);

        printf("--------------------------------\n");
     
    }
}