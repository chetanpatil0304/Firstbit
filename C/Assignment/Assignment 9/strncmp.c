#include <stdio.h>
#include <string.h>

void main (){

    char str1 [20] = "Heya" ;
    char str2 [20] = "Heya Welcome" ;

    int n ;
    printf("Enter the number of characters to compare ");
    scanf("%d",&n);

    int res=strncmp (str1 ,str2, n);

    // Stings are same = 0
    //first string is greater than second string = 1
    // First string is lesser than second string = -1

    if (res==0)
        printf("Strings are equal");
    else
        printf("Strings are unequal");

    printf("\nValue returned by strcmp() is: %d" , res);


    //char *strncpy(char *dest, const char *src, size_t n);

   //str1: This is the first string to be compared.
   //str2: This is the second string to be compared.
}

