#include <stdio.h>
int person_eligible();
int main (){

    int age = 10 ;

    int ans = person_eligible (age);

    if(ans==1){
        printf("Person is eligible to to marry");

    }else {
        printf("Person is eligible to to marry");
    }

}

int person_eligible (int age)
{
    char gender = 'f' ;
    
    if( gender == 'm' && age >=21 || gender =='f' && age >=18){
        return 1 ;
    } else{
        return 0 ;
    }
}