#include <stdio.h>
#include <string.h>

typedef struct{
    int id ;
    char name [100];
    float salary ;
    int incentive ;
    int target ;
}Salesmanager;

void display(Salesmanager a2);
Salesmanager store(Salesmanager a2);

int main() {
    Salesmanager a1 , a2;

    a1 = store(a1);
    display(a1);
    a2 = store(a2);
    display(a2);

    return 0;
}

Salesmanager store(Salesmanager a2) {
    printf("Enter ID  : \n");
    scanf("%d",&a2.id);

    printf("Enter Name : \n");
    scanf("%s",&a2.name);

    printf("Enter salary: \n");
    scanf("%f",&a2.salary);

    printf("Enter Incentives: \n");
    scanf("%d",&a2.incentive);

    printf("Enter Target: \n");
    scanf("%d",&a2.target);

    return a2;
}

void display(Salesmanager a2) {

    printf("Sales Manager ID : %d\n",a2.id);
    printf("Sales manager Name : %s\n",a2.name);
    printf("Salary : %f \n",a2.salary);
    printf("Incentive : %d \n",a2.incentive);
    printf("Target: %d \n",a2.target);

}
