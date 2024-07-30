#include <stdio.h>
#include <string.h>

typedef struct {
    int rollNo;
    char name[100];
    int marks;
} student;

void store(student* ,int);
void display(student* , int );

int main() {

    student studArray[2];

    store(studArray,2);
    display(studArray,2);

    return 0;
}

void store(student* studArray , int size) {


    for(int i=0 ; i<size ;i++){

        printf("Enter Roll no: \n");
        scanf("%d", &studArray[i].rollNo);

        printf("Enter Name: \n");
        scanf("%s", studArray[i].name);

        printf("Enter Marks: \n");
        scanf("%d", &studArray[i].marks);

    }
}

void display(student* studArray , int size) {

    for(int i=0 ; i<size ;i++){

        printf("-----------------------\n");
        printf("Roll no: %d \n", studArray[i].rollNo);
        printf("Name: %s \n", studArray[i].name);
        printf("Marks: %d\n", studArray[i].marks);
        printf("-----------------------\n");

    }

   
}
