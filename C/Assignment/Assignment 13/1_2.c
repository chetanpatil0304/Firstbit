#include <stdio.h>
#include <string.h>

typedef struct {
    int id ;
    char name [100] ;
    float salary ;
} employee;

void display(employee e2);
employee store(employee e2);

int main() {
    employee e1 ,e2;

    e1 = store(e1);
    display(e1);
    e2 = store(e2);
    display(e2);

    return 0;
}

employee store(employee e2) {
    printf("Enter ID no : \n");
    scanf("%d",&e2.id);

    printf("Enter Name : \n");
    scanf("%s",&e2.name);

    printf("Enter salary: \n");
    scanf("%f",&e2.salary);

    return e2;
}

void display(employee e2) {
     printf("ID : %d \n",e2.id);
    printf("Name:  %s \n",e2.name);
    printf("Salary: %f\n",e2.salary);

}
