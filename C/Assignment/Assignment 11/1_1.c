#include <stdio.h>
#include <string.h>

int display(char*,char);
int main  (){

    char str [100];
    printf("Enter the String");
    gets(str);

    char ch ;
    printf("Enter a Character");
    scanf(" %c", &ch); 

    char* result = strchr(str, ch); 
  
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