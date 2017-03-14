#include <stdio.h>

int main() {

    int arr[3];

    printf("%d - %d - %d\n\n", arr[0], arr[1], arr[2]);

    arr[0] = 123;
    arr[1] = 500;
    arr[2] = 720;

    printf("%d - %d - %d\n\n", arr[0], arr[1], arr[2]);

    printf("\n&arr[0]: %p\n&arr[1]: %p\n&arr[2]: %p\n\n", &arr[0], &arr[1], &arr[2]);

    printf("\n&arr: %p\narr: %p\n*arr: %d\n", &arr, arr, *arr);


    return 0;
}
