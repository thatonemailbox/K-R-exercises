#include <stdio.h>

int main(void) {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\t');
        }
        if (c == '\b') {
            putchar('\\b');
        }
        if (c == '\\') {
            putchar('\\\\');
        }
        putchar(c);
    }
}