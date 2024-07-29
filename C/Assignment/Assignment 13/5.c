#include <stdio.h>
#include <string.h>

struct salesmanager {
    int id ;
    char name [100];
    float salary ;
    int incentive ;
    int target ;
};

struct salesmanager a1 , a2 ;
int main (){

    a1.id=343;
    strcpy(a1.name , "Chetan");
    a1.salary=99999;
    a1.incentive=8765;
    a1.target =865;

    printf("Sales Manager ID : %d\n",a1.id);
    printf("Sales manager Name : %s\n",a1.name);
    printf("Salary : %f \n",a1.salary);
    printf("Incentive : %d \n",a1.incentive);
    printf("Target: %d \n",a1.target);

    // user

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

    printf("Sales Manager ID : %d\n",a2.id);
    printf("Sales manager Name : %s\n",a2.name);
    printf("Salary : %f \n",a2.salary);
    printf("Incentive : %d \n",a2.incentive);
    printf("Target: %d \n",a2.target);


    return 0 ;


}