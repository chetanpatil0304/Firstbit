#include <stdio.h>
#include <math.h>

int arm_strongrange(int num);

void main() {
    int range;

    printf("Enter a range: ");
    scanf("%d", &range);

    printf("Armstrong numbers up to %d are:\n", range);
    for (int num = 1; num <= range; num++) {
        if (arm_strongrange(num)) {
            printf("%d\n", num);
        }
    }
}

int arm_strongrange(int num) {
    int cnt = 0, temp = num, sum = 0;

    // Count the number of digits
    while (temp != 0) {
        cnt++;
        temp /= 10;
    }

    temp = num; // Reset temp to the original number

    // Calculate the sum of the cnt-th power of each digit
    while (temp != 0) {
        int rem = temp % 10;
        sum += cnt;
        temp /= 10;
    }

    // Check if the sum is equal to the original number
    return (sum == num);
}
