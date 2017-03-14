#include <stdio.h>
int main() {
    int a = 10;
    int *b = &a;
    int c = b;
    int d = *b;

    printf("a: %d\n\n", a);

    printf("b: %d - %p\n", b, b);
    printf("*b: %d - %p\n", *b, *b);
    printf("&b: %d - %p\n\n", &b, &b);

    printf("c: %d - %p\n\n", c, c);
    printf("d: %d - %p\n", d, d);

    return 0;
}
