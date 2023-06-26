#include <stdio.h>

/* count blanks, tabs, and lines in input */
int main(void) {
	int c;	

	int ns = 0, nt = 0, nl = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ')  {
			ns++;
		}
		if (c == '\t') {
			++nt;
		}	
		if (c == '\n') {
			nl++;
		}
	}
	printf("Spaces: %d\nTabs: %d\nLines: %d\n", ns, nt, nl);
}
