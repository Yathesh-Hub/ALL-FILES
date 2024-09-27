#include <stdio.h>
int main()
{
    int num,positive=0,negative=0;

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &num);

        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
    }

    printf("Number of positive numbers: %d\n", positive);
    printf("Number of negative numbers: %d\n", negative);

    return 0;
}
