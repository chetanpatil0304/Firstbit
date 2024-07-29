#include <stdio.h>
#include <string.h>
void main (){

    char str [40]= "Heya Welcome";

    mystrupr(str);

    puts(str);



    //char *strlwr(char *str);
}

mystrupr (char * str){

    

    for(int i=0 ; i<40; i++){

        if( str[i] >= 'a' && str[i]<='z')
        str[i] = str[i]-32;
        
    }

    return str ;
}