#include <stdio.h>

int main() {

    char ca = 'H';
    char *cb = &ca;
    char *cc = cb + 1;

    printf("ca: %c\n", ca);
    printf("cb: %p\n", cb);
    printf("cc: %p\n\n", cc);

    int ia = 10;
    int *ib = &ia;
    int *ic = ib - 1;

    printf("ia: %d\n", ia);
    printf("ib: %p\n", ib);
    printf("ic: %p\n", ic);
    printf("(ic+10): %p\n\n", ic+10 );

    double da = 10.0;
    double *db = &da;
    double *dc = db + 5;

    printf("da: %f\n", da);
    printf("db: %p\n", db);
    printf("dc: %p\n\n", dc);

    return 0;
}
