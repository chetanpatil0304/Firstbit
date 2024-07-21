#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "asyy12345";
    char keys[] = "abcde";
    size_t len = strspn(str, keys);
    printf("Initial segment length: %zu\n", len);
    return 0;
}
