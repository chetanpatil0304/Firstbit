#include <stdio.h>
double areaofcircle (int);
double circumferenceofcircle (int);
double areaofrectangle (int , int );
double perimeterofrectangle (int , int);

void main (){

    int radius = 4;
    float length = 5 , width = 10 ;

    
    printf("Area of circle is %lf \n",areaofcircle (radius));
    printf("Circumference of circle is %lf\n",circumferenceofcircle (radius));

    printf("Area of rectangle is %lf \n",areaofrectangle (length , width));
    printf("perimeter of rectangle is %lf\n", perimeterofrectangle (length , radius));

}

double areaofcircle (int radius) {
    
    return 3.14 * radius * radius;
}

double circumferenceofcircle (int radius){
    
    return 2 * 3.14 * radius;
}

double areaofrectangle (int length , int width){

    return length*width ;

}
double perimeterofrectangle (int length , int width){

    return 2*(length+width) ;

}