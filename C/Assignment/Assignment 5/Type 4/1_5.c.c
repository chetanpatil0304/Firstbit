#include <stdio.h>
float total_salary (float , float , float , float);
int main (){

    float basic_salary =6000 ;
    float da , ta , hra ;
    

    printf("The Total salary  is %f",total_salary (basic_salary , da ,ta , hra));

}
float total_salary (float basic_salary , float da , float ta , float hra){
    

    if (basic_salary<=5000){

        da = basic_salary *0.10 ;
        ta = basic_salary * 0.20 ;
        hra = basic_salary * 0.25 ;

        printf("dialy allowance is %f\n",da);
        printf("travel allowance is %f\n",ta);
        printf("home rent allowance is %f\n",hra);

        return basic_salary+da+ta+hra ;

    }else{

         da = basic_salary *0.15 ;
        ta = basic_salary * 0.25 ;
        hra = basic_salary * 0.30 ;

        printf("dialy allowance is %f\n",da);
        printf("travel allowance is %f\n",ta);
        printf("home rent allowance is %f\n",hra);

        return basic_salary+da+ta+hra ;

    }
}