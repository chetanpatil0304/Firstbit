#include <stdio.h>
double  temperature1 (double *);
void main (){

    double celsius = 35.985 ;
    printf("Temprature in Fahrenheit is %lf ", temperature1 (&celsius));
}
double temperature1 (double *celsius){

    *celsius = 35.985 ;
 
    return *celsius *( 9/5) + 32 ;

}