#include <stdio.h>
double  temperature1 ();
void main (){

    double celsius = 35.985 ;
     temperature1 (celsius);
}
double temperature1 (double celsius){

    celsius = 35.985 ;

     printf("Temprature in Fahrenheit is %lf ",celsius *( 9/5) + 32);

}