#include <stdio.h>
int main()
{
    int year;
    printf("Enter a Year:");
    scanf("%d",&year);
    if(year%4==1)
    {
        printf("%d is Not Leap Year",year);
    }
    else
    {
        printf("%d is Leap Year",year);
    }
    return 0;
}

