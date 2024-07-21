#include <stdio.h>
#include <string.h>
void main (){
    
    // Define a string 's1' and initialize it with 
    // "GeeksforGeeks" 
    char s1[] = "GeeksforGeeks"; 
    // Define a string 's2' and initialize it with "for" 
    char s2[] = "for"; 
    // Declare a pointer 'result' to store the result of 
    // strstr() 
    char* result; 
  
    // Find the first occurrence of 's2' within 's1' using 
    // strstr() function and assign the result to 'result' 
    result = strstr(s1, s2); 
  
    if (result != NULL) { 
        // If 'result' is not NULL, it means the substring 
        // was found, so print it 
        printf("Substring found: %s\n", result); 
    } 
    else { 
        // If 'result' is NULL, it means the substring was 
        // not found, so print appropriate message 
        printf("Substring not found.\n"); 
    } 
}