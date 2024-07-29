#include <stdio.h>
#include <string.h>
int main (){

    char str [100];
    printf("Enter a string\n");
    gets(str);

    char replace = '$';
    int length =strlen(str);


    for(int i = 0 ; i <length ; i++){
         if(str[i]==' '){
            str[i]=replace;
         }
    }
    printf("Modified string: %s\n", str);



}