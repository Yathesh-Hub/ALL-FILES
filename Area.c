#include <stdio.h>

int main() {

    int h,w;

    printf("Enter the height:");
    scanf("%d",&h);

    printf("Enter the Width:");
    scanf("%d",&w);

    int perimeter = 2 * (h+w);
    int area = h*w;

    printf("Perimeter of the rectangle = %d inches\n", perimeter);
    printf("Area of the rectangle = %d square inches\n", area);

    return 0;
}
