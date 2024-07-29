#include <stdio.h>
#include <string.h>

typedef struct{
    int id ;
    char name [100];
    float salary ;
    int commision ;
}Hr;

void display(Hr a2);
Hr store(Hr a2);

int main() {
    Hr a1 , a2;

    a1 = store(a1);
    display(a1);
    a2 = store(a2);
    display(a2);

    return 0;
}

Hr store(Hr a2) {
    printf("Enter ID  : \n");
    scanf("%d",&a2.id);

    printf("Enter Name : \n");
    scanf("%s",&a2.name);

    printf("Enter salary: \n");
    scanf("%f",&a2.salary);

    printf("Enter Commission: \n");
    scanf("%d",&a2.commision);

    return a2;
}

void display(Hr e2) {
     printf("ID : %d \n",e2.id);
    printf("Name:  %s \n",e2.name);
    printf("Salary: %f\n",e2.salary);

}
