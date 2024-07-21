#include <stdio.h>
#include <string.h>
void main (){

    char str [] = "Heya Welcome";

    int length = mystrlen (str);

    printf("The string is %s",str);
    printf("\nThe length of a string is %d",length);
}

int mystrlen (char * str){
    int count =0 ;

    for(int i=0 ;str[i]!='\0' ;i++){
        count++;
    }

    return count;
}