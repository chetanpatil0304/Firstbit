#include <stdio.h>
double  temperature1 ();
void main (){

    printf("Temprature in Fahrenheit is %lf ", temperature1 ());
}
double temperature1 (double celsius){

    celsius = 35.985 ;
 
    return celsius *( 9/5) + 32 ;

}