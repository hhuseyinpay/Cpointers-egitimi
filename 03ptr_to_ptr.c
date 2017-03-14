#include <stdio.h>

int main() {

    int a = 10;
    int *b = &a;

    int **c = &b;

    printf("a: %d\n\n", a);

    printf("&b: %p\n", &b);
    printf("b: %p\n", b);
    printf("*b: %d\n\n", *b);

    printf("&c: %p\n", &c);
    printf("c: %p\n", c);
    printf("*c: %p\n", *c);
    printf("**c: %d\n", **c);

    return 0;
}
