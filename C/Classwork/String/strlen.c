#include <stdio.h>
#include <string.h>

void main (){

    char str [20] = "Heya Welcome";

    //int strlen(const char *str);

    int length = strlen (str);

    printf("The string is %s",str);
    printf("\nThe length of a string is %d",length);
}