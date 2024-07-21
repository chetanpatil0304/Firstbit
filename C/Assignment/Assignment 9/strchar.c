#include <stdio.h>
#include <string.h>
void main (){

    char str[] = "Heya Welcome"; 
    char ch = 'e'; 


    //char *strchr(const char *str, int c);

    //str: specifies the pointer to the null-terminated string to be searched in.
    //ch: specifies the character to be searched for.

  
    // Search for the character 'e' in the string 
    // Use the strchr function to find the first occurrence 
    // of 'e' in the string 

    char* result = strchr(str, ch); 
  
    // Character 'e' is found, calculate the index by 
    // subtracting the result pointer from the str pointer 
    
    if (result != NULL) { 
        printf("The character '%c' is found at index %ld\n", 
               ch, result - str); 
    } 
    else { 
        printf("The character '%c' is not found in the "
               "string\n", 
               ch); 
    } 
  
}