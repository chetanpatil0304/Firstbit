#include <stdio.h>

void main() {
    int start, end;


    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    for(int num = start; num <= end; num++) {
        printf("Factors of %d are:\n", num);
        for(int i = 1; i <= num; i++) {
            if(num % i == 0) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
}
