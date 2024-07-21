#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "hello";
    int result = strcasecmp(str1, str2);
    if(result == 0)
        printf("Strings are equal (case insensitive)\n");
    else
        printf("Strings are not equal (case insensitive)\n");
    return 0;
}
