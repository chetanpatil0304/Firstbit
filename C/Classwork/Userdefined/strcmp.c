#include <stdio.h>
#include <string.h>
void main (){

    char str1 [20] = "Heya" ;
    char str2 [20] = "Welcome" ;


    int res= mystrcmp(str1 ,str2);


    if (res==0)
        printf("Strings are equal");
    else
        printf("Strings are unequal");

    printf("\nValue returned by strcmp() is: %d" , res);
}

mystrcmp(char * str1 ,char * str2){

    for(int i = 0 ; str1[i]!='\0' ; i++){

        if(str1==str2){
            return 0 ;
        }
    }

}