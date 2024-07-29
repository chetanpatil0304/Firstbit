#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "Helium";
    int result = mystrncasecmp(str1, str2, 3);
    if(result == 0)
        printf("First 3 characters are equal (case insensitive)\n");
    else
        printf("First 3 characters are not equal (case insensitive)\n");
    return 0;
}

mystrncasecmp (char * str1 , char * str2 , int n){

    for(int i = 0 ; i < n ; i++){
         if()
    }



}
