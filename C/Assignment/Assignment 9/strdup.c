#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Heya welcome";
    char *duplicate = strdup(str);
    if(duplicate)
        printf("Duplicate string: %s\n", duplicate);
    
    return 0;
}
