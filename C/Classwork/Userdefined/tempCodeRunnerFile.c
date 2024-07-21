#include <stdio.h>
#include <string.h>

void main(){

    char str1 [50]= "Heya Welcome";
    char str2 [50] = "Sir";

    mystrcat(str1,str2);

}

int mystrcat(char * str1 ,char*  str2 ){

    int i , j ;


    for(i = 0 ; str1[i]!='\0' ; i++);

        for(j=0 ; str1[j]!='\0' ;j++,i++){
            str1[i]=str2[j];

        }
        str1[i]='\0';


    
    printf("%s",str1);
    
    

}