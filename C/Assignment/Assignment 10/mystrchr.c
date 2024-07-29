#include <stdio.h>
int mystrchar(char*,char*);
void main(){

    char str []= "Heya Welcome";
    char e[] = "p";

    int  result=mystrchar(str,e);

    if(result==-1){
        printf("%d found ");

    }else {
        printf("Not found");
    }

}

int mystrchar(char * str ,char * e ){


    for(int i = 0 ; str[i]!='\0' ; i++){

        if(str[i]==e[0]) {

            return -1 ;
        
        }

    }

    
    

}