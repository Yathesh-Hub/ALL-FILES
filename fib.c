#include <stdio.h>
int main()
{
    int n,fir=0,sec=1,next;

    printf("Enter the number:");
    scanf("%d",&n);

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        }
        else {
            next = fir+sec;
            fir=sec;
            sec=next;
        }
        printf("%d,", next);
    }

    printf("\n");

    return 0;
}

