#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

    char *arg_cpy[argc-1];
    int counter = 0;

    for(int i = 1; i < argc;i++) {
        arg_cpy[counter] = (char*) calloc(1, strlen(argv[i]));

        strcpy(arg_cpy[counter], argv[i]);

        counter++;
    }

    for(int i = 1; i < argc; i++) {
        printf("argv %d: %s\n", i, argv[i]);
    }

    printf("\n----------\n");
    for(int i = 0; i < counter; i++) {
        printf("arg_cpy %d: %s \n", i, arg_cpy[i]);
    }

    return 0;
}
