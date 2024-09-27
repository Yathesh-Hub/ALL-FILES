#include <stdio.h>
int main()
{
    int arr[100];
    int i,mx,mn,n;

    printf("Enter the number of elements in the array :");
    scanf("%d",&n);


    printf("Enter elements in the array :", n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    mx=arr[0];
    mn=arr[0];

        for (i=1;i<n;i++)
        {

            if (arr[i]>mx)
            {
            mx=arr[i];
            }

                if (arr[i]<mn)
            {
                mn=arr[i];
            }
        }

    printf("Maximum element is : %d", mx);
    printf("Minimum element is : %d", mn);
	return 0;
}
