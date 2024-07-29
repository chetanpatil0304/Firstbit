#include <stdio.h>
#include <string.h>
void main (){

    char str [100];
    printf("Enter a String : ");
    scanf("%s",&str);

    swapchar(str);

}

void swapchar(char * str){

    int length = strlen(str);
    char swap;

            swap=str[0];
            str[0]=str[length-1];
            str[length-1]=swap;


   printf("After Swapping first and last character is :");
   printf("%s",str);

}