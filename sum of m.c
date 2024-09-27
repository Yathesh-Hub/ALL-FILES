#include <stdio.h>

int main() {
    int m, n, sum = 0;

    printf("Input two integers (m, n):\n");
    scanf("%d %d", &m, &n);

    for (int i = 0; i < n; i++) {
        sum += m + (2 * i);
    }

    printf("\nSum of %d even numbers starting from %d:\n%d\n", n, m, sum);

    return 0;
}

