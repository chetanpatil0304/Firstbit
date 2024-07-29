#include <stdio.h>
#include <string.h>

struct employee {
    int id ;
    char name [100] ;
    float salary ;
};

struct employee e1,e2;
int main (){


    e1.id=34;
    strcpy(e1.name ,"Chetan");
    e1.salary=90999;

    printf("Id no :%d \n",e1.id);
    printf("Name: %s \n",e1.name);
    printf("Salary: %f\n",e1.salary);

    // user

    printf("Enter ID no : \n");
    scanf("%d",&e2.id);

    printf("Enter Name : \n");
    scanf("%s",&e2.name);

    printf("Enter salary: \n");
    scanf("%f",&e2.salary);

    
    printf("ID : %d \n",e2.id);
    printf("Name:  %s \n",e2.name);
    printf("Salary: %f\n",e2.salary);

    return 0 ;


}