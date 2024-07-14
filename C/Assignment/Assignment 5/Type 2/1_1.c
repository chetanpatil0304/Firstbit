#include <stdio.h>
void fToc (celsius);
void main (){

    float celsius = 35.5 ;

    fToc (celsius);
}
void fToc (float celsius){
    float fahrenheit ;

    fahrenheit = celsius *( 9/5) + 32 ;

    printf("Temprature in Fahrenheit is %.2f ",fahrenheit);

}