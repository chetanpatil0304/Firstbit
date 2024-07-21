#include <stdio.h>
#include <string.h>

int main() {

    //Calculates the length of the initial segment of the string which consists entirely of characters not in another string.
    
    char str[] = "aaaa12345";
    char keys[] = "12345";
    size_t len = strcspn(str, keys);
    printf("Initial segment length: %zu\n", len);
    return 0;
}
