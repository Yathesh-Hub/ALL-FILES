#include <stdio.h>
void main()
{
    int array[] = {2, 4, 0, 1, 9};
    int se = 1; }

    int result=-1;

    int n = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < n; i++) {

        if (array[i] == se){
            result=i;
        break;}

(result == -1)? printf("Element not found"):

printf("Element found at index: %d", result);

}
