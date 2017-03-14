#include <stdio.h>

void increase(int num1, int num2) {
    num1 = num1 + 1;
    num2 = num2 + 1;
}

void increase2(int *num1, int *num2) {
    *num1 = *num1 + 1;
    *num2 = *num2 +1;
}

int main() {

    int a = 50;
    int b = 250;

    increase(a, b);

    printf("a: %d \n", a);
    printf("b: %d \n\n", b);

    increase2(&a, &b);

    printf("a: %d \n", a);
    printf("b: %d \n\n", b);

    increase2(a, b);

    printf("a: %d \n", a);
    printf("b: %d \n", b);

    return 0;
}
