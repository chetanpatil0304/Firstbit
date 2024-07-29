#include <stdio.h>
#include <string.h>

typedef struct {
    int rollNo;
    char name[100];
    int marks;
} student;

void display(student s2);
student store(student s2);

int main() {
    student s1 ,s2;

    s1 = store(s1);
    display(s2);
    s2 = store(s2);
    display(s2);

    return 0;
}

student store(student s2) {
    printf("Enter Roll no: \n");
    scanf("%d", &s2.rollNo);

    printf("Enter Name: \n");
    scanf("%s", s2.name);

    printf("Enter Marks: \n");
    scanf("%d", &s2.marks);

    return s2;
}

void display(student s2) {
    printf("Roll no: %d \n", s2.rollNo);
    printf("Name: %s \n", s2.name);
    printf("Marks: %d\n", s2.marks);
}
