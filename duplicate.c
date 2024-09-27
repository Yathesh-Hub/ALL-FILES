#include <stdio.h>
int main()
{
    int arr[100],n,c=0;

    printf("Enter the number of elements in the array :");
    scanf("%d",&n);


    printf("enter elements in the array :\n", n);
    for (int i= 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (arr[i]==arr[j])
            {
                c++;
                break;
            }
        }
    }
    printf("Total number of duplicates in the array: %d",c);
    return 0;
}

