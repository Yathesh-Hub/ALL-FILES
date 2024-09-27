#include <stdio.h>
int main()
{

    int n,arr[100],sum=0;
    float avg;
    printf("Enter the number of element in a array:");
    scanf("%d",&n);

    printf("Enter the Numbers:");

    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
        }

    for(int i=0;i<n;i++){
           sum+=arr[i];
            }

        avg=sum/n;


    printf("Sum=%d",sum);
    printf("Average=%.2f",avg);
}


