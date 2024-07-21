#include <stdio.h>
#include <string.h>
void main (){

    char str[] = "Heya Welcome "; 
    char str2 [] ="Sir";

    strcat(str , str2);

    //char *strcat(char *destination, const char *source)

    puts(str);
    puts(str2);
}