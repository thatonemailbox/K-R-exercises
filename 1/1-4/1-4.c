#include <stdio.h>

/*print Fahrenheit-Celsius table for fahr = 0, 20, ... , 300 */

int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; // lower limit of temperature table 
	upper = 300; // upper limit
	step = 20; // step size
	
	// print header
	printf("Celsius Fahr\n");
	printf("------- ----\n"); // added horizontal line bc I'm extra :)

	celsius = lower;
	while (celsius <= upper) {
		// celsius = (5.0 / 9.0) * (fahr - 32.0), line below results from simple algebra
		fahr = 32.0 +  ( (9.0 / 5.0) * celsius);
		printf("%4.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step; 
	}
}
