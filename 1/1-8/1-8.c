#include <stdio.h>

/* count blanks, tabs, and lines in input */
int main(void) {
	int c;	

	int ns = 0, nt = 0, nl = 0;
	while (1) {
		if ((c = getchar()) != EOF) {
			if (c == ' ')  {
				ns++;
			}
			if (c == '\t') {
				++nt;
			}	
			if (c == '\n') {
				nl++;
			}
		} else {
			printf("Spaces: %d\nTabs: %d\nLines: %d\n", ns, nt, nl);
		}
	}
}
