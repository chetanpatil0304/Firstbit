#include <stdio.h>
#include <string.h>

void main (){

    char str1 [20] = "Heya" ;
    char str2 [20] = "Welcome" ;

    int res=strcmp (str1 ,str2);

    // Stings are same = 0
    //first string is greater than second string = 1
    // First string is lesser than second string = -1

    if (res==0)
        printf("Strings are equal");
    else
        printf("Strings are unequal");

    printf("\nValue returned by strcmp() is: %d" , res);

   


    //int strcmp(const char *str1, const char *str2);
   //str1: This is the first string to be compared.
   //str2: This is the second string to be compared.
}