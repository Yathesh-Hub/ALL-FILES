#include<stdio.h>
int main(){
    int rows,columns;
    printf("Enter number of rows : \n");
    scanf("%d",&rows);
    printf("Enter number of columns : \n");
    scanf("%d",&columns);
    int a[rows][columns];
    int b[rows][columns];
    int result[rows][columns];
    printf("Enter A Matrix\n");
    for(int i = 0; i<rows;i++){
        for(int j = 0; j<columns;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter B Matrix\n");
    for(int i = 0; i<rows;i++){
        for(int j = 0; j<columns;j++){
            scanf("%d",&b[i][j]);
        }
    }

    for(int i = 0; i<rows;i++){
        for(int j = 0; j<columns;j++){
            result[i][j] = 0;
            for(int k = 0; k<columns;k++){
                result[i][j] += a[i][k]*b[k][j];
            }
        }
    }

    printf("Result Matrix : \n");
    for (int i = 0;i<rows;i++){
        for(int j = 0;j<columns;j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
}
}
