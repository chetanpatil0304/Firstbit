#include <stdio.h>
#include <string.h>

typedef struct{
    int id ;
    char name [100];
    float salary ;
    int allowance ;
}Admin;

void display(Admin *,int);
void store(Admin*,int);

int main() {
    Admin admArray[2];

    store(admArray,2);
    display(&admArray,2);

    return 0;
}

void store(Admin * admArray  , int size) {

    for(int i=0 ; i<size ; i++){

        printf("Enter ID  : \n");
        scanf("%d",&admArray[i].id);

        printf("Enter Name : \n");
        scanf("%s",admArray[i].name);

        printf("Enter salary: \n");
        scanf("%f",&admArray[i].salary);

        printf("Enter allowance: \n");
        scanf("%d",&admArray[i].allowance);

    }
    
}

void display(Admin * admArray , int size) {

    for(int i=0 ; i<size ; i++){

        printf("-----------------------\n");
        printf("ID : %d \n",admArray[i].id);
        printf("Name:  %s \n",admArray[i].name);
        printf("Salary: %f\n",admArray[i].salary);
        printf("Allowance : %d\n",admArray[i].allowance);
        printf("-----------------------\n");

    }

    


}
