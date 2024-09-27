#include <stdio.h>
int main() {
    int number;
    int i;
    int factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 1;
    }

    for (i = 1; i <= number; ++i) {
        factorial *= i;
    }
    printf("Factorial:%d\n", factorial);


    return 0;
}

