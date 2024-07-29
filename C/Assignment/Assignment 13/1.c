#include <stdio.h>
#include <string.h>

struct student {
    int rollNo ;
    char name [100] ;
    int marks ;
};

struct student s1,s2;

int main (){

    s1.rollNo=34;
    strcpy(s1.name ,"Chetan");
    s1.marks=99;

    printf("Roll no :%d \n",s1.rollNo);
    printf("Name: %s \n",s1.name);
    printf("Marks: %d\n",s1.marks);

    // user

    printf("Enter Roll no : \n");
    scanf("%d",&s2.rollNo);

    printf("Enter Name : \n");
    scanf("%s",&s2.name);

    printf("Enter Marks : \n");
    scanf("%d",&s2.marks);

    
    printf("Roll no : %d \n",s2.rollNo);
    printf("Name:  %s \n",s2.name);
    printf("Marks: %d\n",s2.marks);


    return 0 ;

}