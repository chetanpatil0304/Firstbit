#include <stdio.h>
void main (){
    

  //1. Even odd
    //2. Basic Salary

    int choice ;

    printf("Enter Your Choice\n");
    scanf("%d",&choice);

    if (choice ==1){
        
        int number;
        printf("Enter Your number \n");
        scanf("%d",&number);
        even_odd (number);
    }else{

        float basic_salary;
        printf("Enter Your number \n");
        scanf("%f",&basic_salary);
        float da , ta , hra ;
        salary (basic_salary , da , ta ,hra);
    }

}
   void even_odd (int number) {

             if(number % 2 == 0){
                 printf("The number %d is a Even number\n",number);
            } else{
                 printf("The number %d is a odd number\n",number);
            }
    }
    void salary (float basic_salary , float da , float ta , float hra) {



            if (basic_salary<=5000){

                 da = basic_salary *0.10 ;
                 ta = basic_salary * 0.20 ;
                 hra = basic_salary * 0.25 ;

                printf("dialy allowance is %f\n",da);
                printf("travel allowance is %f\n",ta);
                printf("home rent allowance is %f\n",hra);

                printf("The Total salary  is %f",basic_salary+da+ta+hra);

            }else{

                  da = basic_salary *0.15 ;
                 ta = basic_salary * 0.25 ;
                 hra = basic_salary * 0.30 ;

                  printf("dialy allowance is %f\n",da);
                  printf("travel allowance is %f\n",ta);
                   printf("home rent allowance is %f\n",hra);

                 printf("The Total salary  is %f",basic_salary+da+ta+hra);

            }
    }
    

