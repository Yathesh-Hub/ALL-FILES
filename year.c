#include <stdio.h>
int main()
{

    int days;

    printf("Enter the days:");
    scanf("%d",&days);

    int years=days/365;
    int weeks=(days%365)/7;
    int day=days-(years*365)-(weeks*7);

    printf("Number of days:%d\n",days);
    printf("Years:%d\n",years);
    printf("Weeks:%d\n",weeks);
    printf("Days:%d\n",day);
    return 0;
}
