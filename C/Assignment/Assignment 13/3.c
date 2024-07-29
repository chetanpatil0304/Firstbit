#include <stdio.h>
#include <string.h>

struct admin {
    int id ;
    char name [100];
    float salary ;
    int allowance ;
};

struct admin a1 , a2 ;
int main (){

    a1.id=343;
    strcpy(a1.name , "Chetan");
    a1.salary=99999;
    a1.allowance=8765;

    printf("Admin ID : %d\n",a1.id);
    printf("Admin Name : %s",a1.name);
    printf("Salary \n : %f",a1.salary);
    printf("Allowance \n : %d",a1.allowance);

    // user

    printf("Enter ID  : \n");
    scanf("%d",&a2.id);

    printf("Enter Name : \n");
    scanf("%s",&a2.name);

    printf("Enter salary: \n");
    scanf("%f",&a2.salary);

    printf("Enter allowance: \n");
    scanf("%d",&a2.allowance);

    
    printf("ID : %d \n",a2.id);
    printf("Name:  %s \n",a2.name);
    printf("Salary: %f\n",a2.salary);
    printf("Allowance: %d\n",a2.allowance);


    return 0 ;


}