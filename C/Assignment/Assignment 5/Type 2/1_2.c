#include <stdio.h>
double areaofcircle ();
double circumferenceofcircle ();
double areaofrectangle ();
double perimeterofrectangle ();

void main (){

    
    printf("Area of circle is %lf \n",areaofcircle ());
    printf("Circumference of circle is %lf\n",circumferenceofcircle ());

    printf("Area of rectangle is %lf \n",areaofrectangle ());
    printf("perimeter of rectangle is %lf\n", perimeterofrectangle ());


    areaofrectangle ();
    perimeterofrectangle ();

}

double areaofcircle () {
    double radius = 4 ;
    return 3.14 * radius * radius;
}

double circumferenceofcircle (){
    double radius = 4 ;
    return 2 * 3.14 * radius;
}

double areaofrectangle (){

    float length = 5 , width = 10 ;
    return length*width ;

}
double perimeterofrectangle (){

    float length = 5 , width = 10 ;
    return 2*(length+width) ;

}