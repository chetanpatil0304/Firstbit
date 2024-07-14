#include <stdio.h>
void person_eligible(int , char);
int main ()
{
    int age = 10 ;
    char gender = 'f' ;
    person_eligible (age , gender);

}

void person_eligible (int age , char gender)
{
    
    if( gender == 'm' && age >=21 || gender =='f' && age >=18){
        printf("Person is eligible to to marry",age,gender);
    } else{
        printf("Person is not eligible to to marry",age,gender);
    }
}