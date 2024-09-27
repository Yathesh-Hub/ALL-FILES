#include <stdio.h>
int main() {
    int number;
    int i=1;
    int factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 1;
    }

    while (i <= number) {
        factorial*= i;
            i++;
    }
    printf("Factorial using while loop: %d\n", factorial);
}
