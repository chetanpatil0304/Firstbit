#include <stdio.h>
#include <string.h>

typedef struct {
    int rollNo;
    char name[100];
    int marks;
} student;

void display(student* );
student store(student);

int main() {
    student s1;

    s1 = store(s1);
    display(&s1);

    return 0;
}

student store(student s) {
    printf("Enter Roll no: \n");
    scanf("%d", &s.rollNo);

    printf("Enter Name: \n");
    scanf("%s", s.name);

    printf("Enter Marks: \n");
    scanf("%d", &s.marks);

    return s;
}

void display(student* s) {

    printf("-----------------------\n");
    printf("Roll no: %d \n", s->rollNo);
    printf("Name: %s \n", s->name);
    printf("Marks: %d\n", s->marks);
    printf("-----------------------\n");
}
