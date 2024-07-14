#include <stdio.h>
void person_eligible();
int main ()
{
person_eligible ();

}

void person_eligible ()
{
     int age = 10 ;
    char gender = 'f' ;
    
    if( gender == 'm' && age >=21 || gender =='f' && age >=18){
        printf("Person is eligible to to marry",age,gender);
    } else{
        printf("Person is not eligible to to marry",age,gender);
    }
}