#include <stdio.h>
#include <string.h>

struct hr {
    int id ;
    char name [100];
    float salary ;
    int commision ;
};

struct hr a1 , a2 ;
int main (){

    a1.id=343;
    strcpy(a1.name , "Chetan");
    a1.salary=99999;
    a1.commision=8765;

    printf("HR ID : %d\n",a1.id);
    printf("HR Name : %s\n",a1.name);
    printf("Salary : %f \n",a1.salary);
    printf("Commission : %d \n",a1.commision);

    // user

    printf("Enter ID  : \n");
    scanf("%d",&a2.id);

    printf("Enter Name : \n");
    scanf("%s",&a2.name);

    printf("Enter salary: \n");
    scanf("%f",&a2.salary);

    printf("Enter Commission: \n");
    scanf("%d",&a2.commision);

    
    printf("ID : %d \n",a2.id);
    printf("Name:  %s \n",a2.name);
    printf("Salary: %f\n",a2.salary);
    printf("Allowance: %d\n",a2.commision);


    return 0 ;


}