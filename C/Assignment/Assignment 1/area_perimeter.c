#include<stdio.h>
int main(){

    //Area  and circumference of circle

    float radius = 4 ;

    if (radius>0){

        printf("Area of circle is %.2f \n",3.14 * radius * radius);
        printf("Circumference of circle is %.2f\n",2 * 3.14 * radius);
    }else{

        printf("Please enter a valid radius\n");

    }

    //Area and perimeter of a rectangle

    float length = 5 , width = 10 ;

    if(length ==0 || width == 0 || length <=0 || width <=0 ){

        printf("Enter valid lenght and width\n");

    }else{

        printf("Area of rectangle %.2f\n",length*width);
        printf("Perimeter of rectangle %.2f\n",2*(length+width));

    }
}