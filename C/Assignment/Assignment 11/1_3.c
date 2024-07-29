#include <stdio.h>
#include <string.h>

int main(){

    char str [100] ;
    printf("Enter the String : ");
    gets(str);

    removenindex(str);
   

}

removenindex(char * str){

    int length = strlen(str);


    for(int i = 0 ; i <length ; i++ ){

        str[length-1]='\0';

    }
    printf("%s",str);
}