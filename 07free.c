#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char *a = NULL;
    a = (char *) malloc(5);

    printf("&a: %p\na: %p\n\n", &a, a);

    strcpy(a, "hasan");

    printf("&a: %p \n a: %p\n",&a, a);

    printf("%%s: %s\n", a);

	free(a);

    return 0;
}
