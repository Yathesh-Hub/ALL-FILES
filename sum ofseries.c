#include <stdio.h>
int main()
{
    int num,sum = 0;

    do {
        printf("Enter an integers(enter 0 to stop): ");
        scanf("%d", &num);

        if (num > 0) {
            sum += num;
        }
    }

    while (num != 0);
    printf("Sum of all positive integers entered: %d\n", sum);

    return 0;
}

