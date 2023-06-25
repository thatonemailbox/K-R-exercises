#include <stdio.h>

int main(void) {
    int c; 
    
    while (1) {
        if ((c = getchar()) == EOF) {
            printf("\nEOF\n");
        }
    }
}