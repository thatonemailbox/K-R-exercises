#include <stdio.h>

#define IN 1
#define OUT 0

/* copies input into output, except output is printed one word at a time */
int main(void) {
    int c;

    int state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            putchar('\n');
        } else {
            putchar(c);
        }
    }
    return 0;
}