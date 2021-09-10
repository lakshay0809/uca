/* Rewriting echo command.
 * @lakshay khanna (1910991116)
 * C Project
 *Compilation: echo.c
 * Execution: ./a.out
 * source :- Github
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (argc, argv) int argc; char *argv[]; {
    int print_newline;

    ++argv;
    if (*argv && !strcmp(*argv, "-n")) {
        ++argv;
        print_newline = 0;
    } else {
        print_newline = 1;
    }

    while(*argv) {
        int len= strlen(argv[0]);

        if (len >= 2 && !argv[1] && argv[0][len-2] == '\\' && argv[0][len-1] == 'c') {
            argv[0][len-2] = '\0';
            print_newline = 0;
        }

        printf("%s", *argv);
        ++argv;

        if (*argv) {
            putchar(' ');
        }

        if (print_newline) {
            putchar('\n');
        }
    }
}