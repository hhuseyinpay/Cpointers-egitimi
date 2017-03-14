#include <stdio.h>

int main() {

    int a = 10;

    int *b = &a;

    printf("a: %d \nb: %d - %p\n", a, b, b);

    return 0;
}
