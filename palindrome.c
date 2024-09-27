#include <stdio.h>
int main() {
    int num, rev= 0,org,remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    org= num;

    while (num != 0) {
        remainder = num%10;
        rev= rev*10+remainder;
        num /= 10;
    }

    if (org== rev) {
        printf("%d is a palindrome.\n", org);
    } else {
        printf("%d is not a palindrome.\n", org);
    }

    return 0;
}
