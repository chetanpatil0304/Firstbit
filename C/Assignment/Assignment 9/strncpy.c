#include <stdio.h>
#include <string.h>
void main (){

    char source[] = "Heya Welcome"; 
    char dest[20]; 

    int n ;
    printf("Enter the number of characters to copy ");
    scanf("%d",&n);

    //char *strncpy(char *dest, const char *src, size_t n);


    //dest: Pointer to the destination array where the content is to be copied. 
    //src: string which will be copied.

    strncpy(dest, source , n); 
  
    // printing result 
    printf("Source: %s\n", source); 
    printf("Destination: %s\n", dest);
}