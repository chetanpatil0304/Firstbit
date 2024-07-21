#include <stdio.h>
#include <string.h>
void main (){

    char str[] = "Heya Welcome "; 
    char str2 [] ="Sir";

    int n ;
    printf("Enter the number of characters to concat ");
    scanf("%d",&n);

    strncat(str , str2,n);

    //char *strncat(char *dest, const char *src, size_t n);


    puts(str);
   // puts(str2);
}