//Write a program to check if person is eligible to marry or not ( male age >= 21 and femaile  age >=18)
#include <stdio.h>
int main(){
    int age = 10 ;
    char gender = 'f' ;
    
    if( gender == 'm' && age >=21 || gender =='f' && age >=18){
        printf("Person is eligible to to marry",age,gender);
    } else{
        printf("Person is not eligible to to marry",age,gender);
    }
}