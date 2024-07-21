#include <stdio.h>
#include <string.h>
void main (){

    char source [100];

    printf("Enter the string");
    gets(source);
    
    char dest[20] ={ }; 

    
    mystrcpy(dest, source); 
  
}
mystrcpy (char * dest , char* source){


    for(int i=0 ; i<20 ; i++){

        dest[i]=source[i];

    }

    dest[100]='\0';
    printf("%s",dest);
    

}