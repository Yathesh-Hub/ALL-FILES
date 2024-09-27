#include <stdio.h>
int main()
{

    int small,n1,n2,count=1,gcd;

    printf("Enter two integers:");
    scanf("%d%d",&n1,&n2);

    small=(n1<n2)? n1 : n2;

    while (count<=small){

        if (n1%count==0 && n2%count==0){
            gcd=count;
        }
        count++;
    }
    int lcm=(n1*n2)/gcd;

    printf("lcm:%d\n Gcd:%d",lcm,gcd);
}
