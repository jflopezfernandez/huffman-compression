
#include "hc.h"

int main(int argc, char *argv[])
{
    if (argc == 1) {
        fprintf(stderr, "[Error] No input(s).\n");

        return EXIT_SUCCESS;
    }

    while (*++argv) {
        printf("%s\n", *argv);
    }

    return EXIT_SUCCESS;
}

