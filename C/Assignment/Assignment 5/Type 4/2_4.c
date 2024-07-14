
#include <stdio.h>
int evenodd(int);
float salary(float);

void main() {

    int number;
    printf("Enter Your number: ");
    scanf("%d", &number);

    int result = evenodd(number);
    if (result == 1) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }
     

    float basic_salary;
    printf("Enter your basic salary: ");
    scanf("%f", &basic_salary);

    float total_salary = salary (basic_salary);
    printf("The total salary is: %.2f\n", total_salary);

}

int evenodd(int number) {

    if (number % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

float salary (float basic_salary) {

    float da, ta, hra;

    if (basic_salary <= 5000) {
        da = basic_salary * 0.10;
        ta = basic_salary * 0.20;
        hra = basic_salary * 0.25;
    } else {
        da = basic_salary * 0.15;
        ta = basic_salary * 0.25;
        hra = basic_salary * 0.30;
    }

    printf("Daily allowance is: %.2f\n", da);
    printf("Travel allowance is: %.2f\n", ta);
    printf("Home rent allowance is: %.2f\n", hra);

    return basic_salary + da + ta + hra;
}