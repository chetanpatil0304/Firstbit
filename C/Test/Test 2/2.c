#include <stdio.h>
int grade (int);
void main (){

    float obtained_marks ;
    printf("Enter your marks");
    scanf("%f",&obtained_marks);

    float total_marks ;
    printf("Enter your marks");
    scanf("%f",&total_marks);

    double percentage = (obtained_marks/total_marks )*100;
    
    if (percentage>=75  && percentage <=100){
        printf("Your percentage is %lf so grade A +",percentage);
    }
    else if (percentage>=60){
        printf("Your percentage is %lf grade is A",percentage);
    }
    else if ( percentage>=50){
        printf("Your percentage is %lf Grade is B",percentage);
    }
    else if  (percentage>= 35){
        printf("Your percentage is %lf so are passed Exam",percentage);
    }else {
        printf("Your percentag is %lf are failed in exam",percentage);
    } 
    

}