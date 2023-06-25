#include <stdio.h>

/* count blanks, tabs, and lines in input */
int main(void) {
	int c;
	
	int count = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			count++;
		}
	}
	printf("%i", count);
}
