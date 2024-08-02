#include <stdio.h>
#include <string.h>

typedef struct  {
    int hrs ;
    int min ;
    int sec ;

}Time;
void displayone(Time*,int);
void storeone(Time*,int);
void displaytwo(Time*,int);
void storetwo(Time*,int);
void additiondisplay (Time *,Time *, Time * , int);
void additionstore (Time * ,Time * , Time *, int );
void main (){

    Time timeArrayone [1];
    Time timeArraytwo [1];
    Time addArray [1];

    storeone(timeArrayone ,1);
    storetwo(timeArraytwo ,1);
    displayone(timeArrayone,1);
    displaytwo(timeArraytwo,1);
    additiondisplay(addArray,timeArrayone,timeArraytwo,1);
    additionstore(addArray,timeArrayone,timeArraytwo,1);

}

void storeone (Time * timeArrayone , int size){
    
    for(int i=0 ; i<size ; i++){

        printf("Enter Hour : \n");
        scanf("%d",&timeArrayone[i].hrs);

        printf("Enter Minute : \n");
        scanf("%d",&timeArrayone[i].min);

        printf("Enter Second : \n");
        scanf("%d",&timeArrayone[i].sec);


    }
}

void displayone (Time * timeArrayone , int size){
    
    for(int i =0 ;i <size ; i++){

        printf("-----------------------\n");

        printf(" %d:",timeArrayone[i].hrs);
        printf("%d",timeArrayone[i].min);
        printf(" :%d\n",timeArrayone[i].sec);

         printf("-----------------------\n");

    }

}


void storetwo (Time * timeArraytwo , int size){
    
    for(int i=0 ; i<size ; i++){

        printf("Enter Hour : \n");
        scanf("%d",&timeArraytwo[i].hrs);

        printf("Enter Minute : \n");
        scanf("%d",&timeArraytwo[i].min);

        printf("Enter Second : \n");
        scanf("%d",&timeArraytwo[i].sec);


    }
}

void displaytwo (Time * timeArraytwo , int size){
    
    for(int i =0 ;i <size ; i++){

        printf("-----------------------\n");

        printf(" %d:",timeArraytwo[i].hrs);
        printf("%d",timeArraytwo[i].min);
        printf(" :%d\n",timeArraytwo[i].sec);

         printf("-----------------------\n");

    }

}

void additiondisplay (Time * addArray,Time * timeArrayone , Time * timeArraytwo , int size){

    for(int i=0 ; i<size ;i++){
        
        addArray[i].hrs = timeArrayone[i].hrs + timeArraytwo[i].hrs ;
        addArray[i].min = timeArrayone[i].min + timeArraytwo[i].min ;
        addArray[i].sec = timeArrayone[i].sec + timeArraytwo[i].sec ;

        if(addArray[i].sec>=60 ){
            addArray[i].min=addArray[i].min+1;
            addArray[i].sec=addArray[i].sec-60;

        }
        if(addArray[i].min>60){
            addArray[i].hrs=addArray[i].hrs+1;
            addArray[i].min=addArray[i].min-60;
        }

    }

}

void additionstore (Time * addArray,Time * timeArrayone , Time * timeArraytwo , int size){

    for(int i=0 ; i<size ;i++){

        printf("-----------------------\n");
        printf(" %d:",addArray[i].hrs);
        printf("%d",addArray[i].min);
        printf(":%d\n",addArray[i].sec);
        printf("-----------------------\n");

    }
}

