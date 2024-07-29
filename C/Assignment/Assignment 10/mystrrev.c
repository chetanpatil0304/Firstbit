#include <stdio.h>
#include <string.h>

void mystrrev(char *str);

int main() {
    char str[] = "Hello, world!";
    mystrrev(str);  
    printf("Reversed string: %s\n", str); 
    return 0;
}

void mystrrev(char *str) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}
