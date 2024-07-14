#include <stdio.h>

void main (){

    float radius = 4 ;
    float length = 5 , width = -10 ;

    circle (radius);
    rectangle (length , width);

}

void circle (float radius){
        //Area  and circumference of circle

    if (radius>0){

        printf("Area of circle is %.2f \n",3.14 * radius * radius);
        printf("Circumference of circle is %.2f\n",2 * 3.14 * radius);
    }else{

        printf("Please enter a valid radius\n");

    }


}

void rectangle (float length , float width){
     
    if(length ==0 || width == 0 || length <=0 || width <=0 ){

        printf("Enter valid lenght and width\n");

    }else{

        printf("Area of rectangle %.2f\n",length*width);
        printf("Perimeter of rectangle %.2f\n",2*(length+width));

    }
}