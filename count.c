#include <stdio.h>
int main()
{
    int num,count=0;

    printf("Input a number: ");
    scanf("%d", &num);

    while (num!= 0){
        num/=10;
        ++count;
    }
    printf("The number of digits in given number is %d\n", count);

    return 0;
}
