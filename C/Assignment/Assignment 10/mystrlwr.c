#include <stdio.h>
#include <string.h>
void main (){

    char str [40]= "Heya Welcome";

    mystrlwr(str);

    puts(str);



    //char *strlwr(char *str);
}

mystrlwr (char * str){

    

    for(int i=0 ; i<40; i++){

        if( str[i] >= 'A' && str[i]<='Z')
        str[i] = str[i]+32;
        
    }

    return str ;
}