#include <stdio.h>

int main() {
    int amount,count;

    printf("Input the amount: ");
    scanf("%d", &amount);

    int notes[7] = {100, 50, 20, 10, 5, 2, 1};


    printf("There are:\n");
    for (int i = 0; i < 7; i++) {
        count = amount / notes[i];
            printf("%d Note(s) of %.2f\n", count, (float)notes[i]);
        amount %= notes[i];
    }

    return 0;
}

