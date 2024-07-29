#include <stdio.h>
#include <string.h>
void main (){

    char dest [10] = "Heya";
    char src [10] = " Welcome";

    //char* strcat(char* dest, const char* src);
    //dest: Destination string
    //src: Source string

    //concatenating src at the end of dest 
    strcat(dest,src);
    printf(" %s ",dest);

}