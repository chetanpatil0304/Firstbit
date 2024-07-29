#include <stdio.h>
#include <string.h>

typedef struct{
    int id ;
    char name [100];
    float salary ;
    int allowance ;
}Admin;

void display(Admin *);
Admin store(Admin);

int main() {
    Admin a1 ;

    a1 = store(a1);
    display(&a1);

    return 0;
}

Admin store(Admin a2) {
    printf("Enter ID  : \n");
    scanf("%d",&a2.id);

    printf("Enter Name : \n");
    scanf("%s",a2.name);

    printf("Enter salary: \n");
    scanf("%f",&a2.salary);

    printf("Enter allowance: \n");
    scanf("%d",&a2.allowance);

    return a2;
}

void display(Admin * e2) {

    
    printf("-----------------------\n");
    printf("ID : %d \n",e2->id);
    printf("Name:  %s \n",e2->name);
    printf("Salary: %f\n",e2->salary);
    printf("Allowance : %d\n",e2->allowance);
    
    printf("-----------------------\n");

}
