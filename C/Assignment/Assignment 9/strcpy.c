#include <stdio.h>
#include <string.h>
void main (){

    char source[] = "Heya Welcome"; 
    char dest[20]; 

    //char* strcpy(char* dest, const char* src);

    //dest: Pointer to the destination array where the content is to be copied. 
    //src: string which will be copied.

    strcpy(dest, source); 
  
    // printing result 
    printf("Source: %s\n", source); 
    printf("Destination: %s\n", dest);
}