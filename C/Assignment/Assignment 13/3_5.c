#include <stdio.h>
#include <string.h>

typedef struct{
    int id ;
    char name [100];
    float salary ;
    int incentive ;
    int target ;
}Salesmanager;

void display(Salesmanager*,int);
void store(Salesmanager *,int);

int main() {
    Salesmanager salesmaArray[2];

    store(salesmaArray,2);
    display(&salesmaArray,2);


    return 0;
}

void store(Salesmanager * salesmaArray , int size) {

    for(int i=0 ; i<size ; i++){
        printf("Enter ID  : \n");
        scanf("%d",&salesmaArray[i].id);

        printf("Enter Name : \n");
        scanf("%s",salesmaArray[i].name);

        printf("Enter salary: \n");
        scanf("%f",&salesmaArray[i].salary);

        printf("Enter Incentives: \n");
        scanf("%d",&salesmaArray[i].incentive);

        printf("Enter Target: \n");
        scanf("%d",&salesmaArray[i].target);

    }

}

void display(Salesmanager* salesmaArray , int size) {

    for(int i=0 ;i<size ;i++){

        printf("----------------\n");
        printf("Sales Manager ID : %d\n",salesmaArray[i].id);
        printf("Sales manager Name : %s\n",salesmaArray[i].name);
        printf("Salary : %f \n",salesmaArray[i].salary);
        printf("Incentive : %d \n",salesmaArray[i].incentive);
        printf("Target: %d \n",salesmaArray[i].target);
        printf("----------------\n");

    }



}
