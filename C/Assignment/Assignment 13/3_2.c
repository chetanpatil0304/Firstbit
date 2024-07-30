#include <stdio.h>
#include <string.h>

typedef struct {
    int id ;
    char name [100] ;
    float salary ;
} employee;

void display(employee*,int);
void store(employee*,int);

int main() {

    employee emplArray [2];

    store(emplArray,2);
    display(emplArray,2);
 
    return 0;
}

void store(employee * emplArray, int size) {

    for(int i=0 ; i<size ;i++){

        printf("Enter ID no : \n");
        scanf("%d",&emplArray[i].id);

        printf("Enter Name : \n");
        scanf("%s",emplArray[i].name);

        printf("Enter salary: \n");
        scanf("%f",emplArray[i].salary);

    }

    
}

void display(employee* emplArray , int size) {

    for(int i=0 ; i<size ; i++){

       printf("-----------------------\n");
       printf("ID : %d \n",emplArray[i].id);
       printf("Name:  %s \n",emplArray[i].name);
       printf("Salary: %f\n",emplArray[i].salary);
       printf("-----------------------\n");

    }

}
