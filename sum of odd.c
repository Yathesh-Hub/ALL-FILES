#include <stdio.h>
int main()
{

    int n1,n2,n3,n4,n5,sum;

    printf("Enter the first integer:");
    scanf("%d",&n1);
    printf("Enter the second integer:");
    scanf("%d",&n2);
    printf("Enter the third integer:");
    scanf("%d",&n3);
    printf("Enter the fourth integer:");
    scanf("%d",&n4);
    printf("Enter the fifth integer:");
    scanf("%d",&n5);

    int arr[5]={n1,n2,n3,n4,n5};

    for(int i=0;i<arr[5];i++){
        if (arr[i]%2==1){
            sum+=arr[i];
        }
    }
    printf("Sum of odd numbers:%d",sum);

}
