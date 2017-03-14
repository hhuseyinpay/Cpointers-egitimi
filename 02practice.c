#include <stdio.h>

int main() {

/*
 * * * * * * * * * * * *
 * * * * * * * * * * * *
 */

    int range = 9715; /* roketin en kötü koşuldaki menzili */

    int *range_p = &range;

    printf("range: %d \n", range);
    printf("range_p: %p \n", range_p);
    printf("*range_p: %d \n\n", *range_p);
/*
 * * * * * * * * * * * * * *
 * * * * * * * * * * * * * *
 */


    *range_p += 175; /*hava açıksa */

    printf("*range_p: %d \n\n", *range_p);
/*
 * * * * * * * * * * * * * *
 * * * * * * * * * * * * * *
 */

    range_p += 500; /* rüzgar arkadaysa */

    printf("*range_p: %d \n", *range_p);

    return 0;
}
