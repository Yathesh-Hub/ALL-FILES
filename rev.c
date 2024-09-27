#include <stdio.h>
int main()
{
    int num,rev=0,rem;

    printf("Input a number: ");
    scanf("%d", &num);

    while(num != 0) {
        rem=num%10;
        rev=rev*10+rem;
        num /= 10;
    }
    printf("The number in reverse: %d\n", rev);
    return 0;
}

