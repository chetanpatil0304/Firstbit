#include <stdio.h>
#include <string.h>

typedef struct {
    int id ;
    char name [100] ;
    float salary ;
} employee;

void display(employee*);
employee store(employee);

int main() {
    employee e1 ;

    e1 = store(e1);
    display(&e1);
 
    return 0;
}

employee store(employee e) {
    printf("Enter ID no : \n");
    scanf("%d",&e.id);

    printf("Enter Name : \n");
    scanf("%s",e.name);

    printf("Enter salary: \n");
    scanf("%f",&e.salary);

    return e;
}

void display(employee* e) {

    printf("-----------------------\n");
    printf("ID : %d \n",e->id);
    printf("Name:  %s \n",e->name);
    printf("Salary: %f\n",e->salary);

}
