#include <stdio.h>
#include <string.h>

int main(){

    char str [100] ;
    printf("Enter the String : ");
    gets(str);

    int length = strlen(str);

    printf("The %d Charcters present in a string",length);

}