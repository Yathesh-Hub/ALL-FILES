#include <stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    printf("Enter the number of columns:");
    scanf("%d",&c);

    int a[r][c],b[r][c];

    printf("Enter the ele in :");
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The %dx%d Matrix:\n",r,c);
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

