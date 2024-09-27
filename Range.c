#include <stdio.h>
int main()
{

    int n;

    printf("Enter the number:");
    scanf("%d",&n);

    if (0<=n&&n<20){
        printf("Range [0,20]");
    }
    else if(n>20&&n<40){
        printf("Range [0,40]");
    }
    else if(n>40&&n<60){
        printf("Range [0,60]");
    }
    else if(n<60&&n>80){
        printf("Range [0,80]");
    }
    else{
        printf("Error");
    }
}
