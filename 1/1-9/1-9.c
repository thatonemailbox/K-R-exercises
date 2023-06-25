#include <stdio.h>

int main(void) {
	int c;

	// variable to track character before c
	int last_c = '\0';
	while ((c = getchar()) != EOF) {
		// if c or character before c are spaces, no char is printed
		if (c != ' ' || last_c != ' ') {
			putchar(c);
		}

		last_c = c;
	}
}
