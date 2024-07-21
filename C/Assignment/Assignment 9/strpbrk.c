#include <stdio.h>
#include <string.h>

int main() {

    //Finds the first occurrence of any character from a set of characters in a string.
    
    char str[] = "abcde12345";
    char keys[] = "xyz123";
    char *result = strpbrk(str, keys);
    if(result)
        printf("First matching character: %c\n", *result);
    else
        printf("No matching character found\n");
    return 0;
}
